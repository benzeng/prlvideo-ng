
void FUN_10055b630(long param_1,char param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_38 [12];
  
  lVar1 = param_1 + 0x28;
  local_38 = FUN_100715260(lVar1,4);
  FUN_10055cc50(lVar1,local_38);
  uVar2 = FUN_10071bea0(local_38);
  uVar3 = uVar2 | 2;
  if (param_2 == '\0') {
    uVar3 = uVar2 & 0xfffffffd;
  }
  FUN_10071bef0(local_38,uVar3);
  FUN_10055cf40(lVar1,local_38);
  FUN_10083d420(*(undefined8 *)(param_1 + 0x10));
  return;
}

