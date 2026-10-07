
long FUN_10070f8c0(int param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = _mmap(0,param_2,3,1,param_1,0);
  _close(param_1);
  if (lVar1 == -1) {
    lVar1 = 0;
  }
  return lVar1;
}

