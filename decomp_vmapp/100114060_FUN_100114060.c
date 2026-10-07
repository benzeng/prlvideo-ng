
undefined8 FUN_100114060(long param_1)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = FUN_100683330(param_1 + 0xc,0x6008781e,&local_10,8,0);
  if (iVar1 != 0) {
    FUN_1008e3970("","vm",0,"Failed to get HVT features");
    local_10 = 3;
  }
  return local_10;
}

