
undefined8 FUN_100160570(void)

{
  bool *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (bool *)FUN_1001603f0();
  if (pbVar1 != (bool *)0x0) {
    uVar2 = CSdkRequest::waitForCompletion(pbVar1,0);
    return uVar2;
  }
  return 0x80000007;
}

