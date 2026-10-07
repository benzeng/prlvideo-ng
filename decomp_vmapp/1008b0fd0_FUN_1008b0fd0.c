
long FUN_1008b0fd0(int *param_1,code *param_2)

{
  long lVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 2);
  lVar1 = (*param_2)(0,&local_18,(long)*param_1);
  if (lVar1 == 0) {
    FUN_100887ce0(0xd,0x88,0x6e,"asn_pack.c",0x79);
  }
  return lVar1;
}

