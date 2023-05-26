#pragma once

template<typename T, typename N>
class Matrix
{
  public:

    class Row 
    {
      friend class Matrix;
      public:
        T& operator[](const int col)
        {
            return parent.m_data[row][col];
        }
      private:
        Row(Matrix<T, N> &parent_, N row_) : 
            parent(parent_),
            row(row_)
        {}

        Matrix<T, N>& parent;
        N row;
    };

    Row operator[](const int row)
    {
      return Row(*this, row);
    }

    Matrix()
    {
      
    }
    Matrix(N rows, N cols) 
    : m_rows(rows)
    , m_cols(cols)
    {
      m_data = new T*[rows];
      for (N i = 0; i < rows; ++i)
      {
        m_data[i] = new T[cols];
      }
    }

    ~Matrix()
    {
      for (N i = 0; i < m_rows; ++i)
      {
        delete[] m_data[i];
      }
      delete[] m_data;

      m_data = nullptr;
      m_rows = 0;
      m_cols = 0;
    }

    void allocate(N rows, N cols)
    {
      // if pointer doesn't already exist (TODO)
      m_data = new T*[rows];
      for (N i = 0; i < rows; ++i)
      {
        m_data[i] = new T[cols];
      }
    }

    Matrix(const Matrix& other) {};
    Matrix& operator=(const Matrix& other);

    Matrix(Matrix&& other);
    Matrix& operator=(Matrix&& other);

    N rows() const { return m_rows; }

    N cols() const { return m_cols; }

  private:

    N m_rows;
    N m_cols;
    T** m_data;
};