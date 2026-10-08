
char FUN_1005c20a0(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined1 local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined4 local_2c;
  undefined1 local_21;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar3 + 0x54) != 2) goto LAB_1005c2155;
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  FUN_1005b98c0(local_48);
  cVar2 = FUN_10011a7e0(uVar1,local_2c);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c2107;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005c2107:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c2137;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005c2137:
  lVar3 = *(long *)(param_1 + 0x18);
  if (cVar2 != '\0') {
    return (*(uint *)(lVar3 + 0x38) & 0xffffff00) != 0x800;
  }
LAB_1005c2155:
  cVar2 = '\n';
  if (*(int *)(lVar3 + 0x60) != 2) {
    cVar2 = FUN_1001248a0(*(undefined4 *)(lVar3 + 0x38));
    cVar2 = (cVar2 == '\0') * '\x02' + '\x02';
  }
  return cVar2;
}

