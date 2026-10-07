
undefined8 FUN_1002c4230(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined *local_38;
  undefined1 local_29;
  
  if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f8) + 0x10))();
  }
  plVar3 = (long *)(param_1 + 0x90);
  local_38 = PTR_shared_null_100ba2188;
  FUN_10051afa0(plVar3,&local_38);
  FUN_100013180(&local_38);
  lVar2 = 0;
  do {
    if (*(int *)((long)&DAT_1011c4aa0 + lVar2) == 5) {
      iVar1 = FUN_1002c6cd0((long)&DAT_1011c4ab8 + lVar2);
      if (iVar1 == 0) {
        FUN_10000c490(plVar3,(long)&DAT_1011c4ab8 + lVar2);
      }
    }
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0xb70);
  local_50 = (QArrayData *)QString::fromAscii_helper("%1|%2",5);
  local_58 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MOUSE@",0xe);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  QString::arg(&local_40,&local_48,DAT_101116b50,0,10,0x20);
  FUN_10000c490(plVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c436d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c436d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c439d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c439d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c43cd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002c43cd:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c43fd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002c43fd:
  local_70 = (QArrayData *)QString::fromAscii_helper("%1|%2",5);
  local_78 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@KEYBOARD@",0x11);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  QString::arg(&local_60,&local_68,DAT_1011c5668,0,10,0x20);
  FUN_10000c490(plVar3,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c449d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002c449d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c44cd;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002c44cd:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c44fd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002c44fd:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c452d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002c452d:
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"SARE: Prepare list to save (count = %d)",
                  *(int *)(*plVar3 + 0xc) - *(int *)(*plVar3 + 8));
  }
  return 0;
}

