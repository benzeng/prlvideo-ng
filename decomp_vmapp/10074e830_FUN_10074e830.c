
bool FUN_10074e830(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  
  bVar1 = (param_1 & 3) != 0;
  if (!bVar1) {
    ___bzero(param_1,0x4020);
    *(undefined8 *)(param_1 + 0x4010) = param_2;
  }
  return bVar1;
}

