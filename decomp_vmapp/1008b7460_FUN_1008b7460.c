
bool FUN_1008b7460(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (lVar2 = FUN_10089fd00(*(undefined8 *)(*param_1 + 0x30)), lVar2 == 0)) {
    FUN_100887ce0(0xb,0x80,0x75,"x509_cmp.c",0x15b);
    return false;
  }
  iVar1 = FUN_100891ed0(lVar2,param_2);
  if (iVar1 == 0) {
    uVar3 = 0x74;
    uVar4 = 0x155;
  }
  else if (iVar1 == -1) {
    uVar3 = 0x73;
    uVar4 = 0x158;
  }
  else {
    if (iVar1 != -2) goto LAB_1008b752c;
    uVar3 = 0x75;
    uVar4 = 0x15b;
  }
  FUN_100887ce0(0xb,0x80,uVar3,"x509_cmp.c",uVar4);
LAB_1008b752c:
  FUN_1008924e0(lVar2);
  return 0 < iVar1;
}

