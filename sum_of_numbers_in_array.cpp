#include <bits/stdc++.h>

int sum(int input[], int n) {
  int size=end(input)-begin(input);
  if(size==n){
    return input[0];
  }
  return input[n]+sum(input, n-1);
}
