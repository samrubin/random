#ifndef FLOAT2DARRAY_H
#define FLOAT2DARRAY_H

class Float2DArray 
{
	public:
		float& operator()(int i, int j)const;
		void   operator=(const Float2DArray&);
		
		Float2DArray();
		Float2DArray(int rows, int cols);
		~Float2DArray();
		int maxRowIndex() const;
        int maxColumnIndex() const;
	private:
		int    numRows;
		int    numCols;
		float* data;	
};

#endif
