
undefined8 FUN_1000503e0(long param_1,undefined4 *param_2,ulong param_3,char param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar2 = FUN_1002a6120(*(undefined8 *)(param_1 + 0x88),0,1);
  if (*(uint *)(lVar2 + 8) < param_3) {
    if (param_4 == '\0') {
      return 0;
    }
    cVar1 = FUN_100050490(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    local_40 = 6;
    local_38 = 0;
    local_34 = 0;
    param_2 = &local_40;
    uVar3 = 0x10;
    local_3c = (int)param_3;
  }
  else {
    uVar3 = param_3 & 0xffffffff;
  }
  FUN_1002a5a50(lVar2,0,param_2,uVar3);
  return 1;
}

