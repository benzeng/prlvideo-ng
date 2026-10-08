
long FUN_10026ba50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar1 = FUN_100370280();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_30,uVar4);
  lVar2 = FUN_1003704b0(uVar1,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10026bad2;
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10026bad2:
  if ((((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 4) == 0)) ||
      (lVar3 = *(long *)(param_1 + 0x78), *(long *)(param_1 + 0x78) == 0)) &&
     ((lVar3 = 0, lVar2 != 0 && (lVar3 = 0, (*(byte *)(*(long *)(lVar2 + 0x28) + 9) & 0x80) != 0))))
  {
    lVar3 = lVar2;
  }
  return lVar3;
}

