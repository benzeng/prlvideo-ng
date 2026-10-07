
int FUN_100030ec0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = *(undefined8 *)(DAT_1011c3698 + 0xf0);
  local_14 = FUN_100430230(uVar1);
  local_18 = 2;
  local_1c = FUN_100436060(uVar1);
  iVar2 = FUN_1000ed430(3);
  iVar3 = -1;
  if (iVar2 != 0) {
    iVar2 = FUN_1000ed5c0(&local_18,4);
    if (iVar2 != 0) {
      iVar2 = FUN_1000ed5c0(&local_14,4);
      if (iVar2 != 0) {
        iVar2 = FUN_1000ed5c0(&local_1c,4);
        if (iVar2 != 0) {
          iVar3 = FUN_1000ed7d0();
          iVar3 = -(uint)(iVar3 == 0);
        }
      }
    }
  }
  return iVar3;
}

