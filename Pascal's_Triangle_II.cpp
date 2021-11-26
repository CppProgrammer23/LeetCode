vector<int> getRow(int rowIndex) 
{
    vector<vector<int>> vec;
    vector<int> v;
    if(rowIndex == 0)
        return {1};
    else if(rowIndex == 1)
        return {1,1};
    vec = {{1},{1,1}};
    for(unsigned i = 3; i <= rowIndex + 1; i++)
    {
        v.resize(i-1);
        v[0] = 1;
        for(unsigned j = 0; j < i - 2; j++)
        {
            v[j+1] = vec.at(i-2)[j] + vec.at(i-2)[j+1]; 
        }
        v.push_back(1);
        vec.push_back(v);
        v.clear();
    }
    return vec[rowIndex];
}
