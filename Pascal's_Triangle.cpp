vector<vector<int>> generate(int numRows) 
{
    vector<vector<int>> vec;
    vector<int> v;
    if(numRows == 0)
        return vec;
    else if(numRows == 1)
        return {{1}};
    vec = {{1},{1,1}};
    for(unsigned i = 3; i <= numRows; i++)
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
    return vec;
}
