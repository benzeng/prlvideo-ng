
void FUN_1000f02c0(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  long *local_68;
  long *local_60;
  long *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar1 = param_1 + 2;
  lVar4 = *(long *)(*(long *)(*param_3 + 0x10) + 0x80);
  pcVar7 = (char *)0x0;
  if (lVar4 != 0) {
    pcVar7 = *(char **)(lVar4 + 0x10);
  }
  QByteArray::QByteArray((QByteArray *)&local_40,pcVar7,*(int *)(*(long *)(*param_3 + 0x10) + 0x8c))
  ;
  QByteArray::append((QByteArray *)plVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f0341;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000f0341:
  lVar4 = *plVar1;
  pcVar7 = (char *)(*(long *)(lVar4 + 0x10) + lVar4);
  if ((pcVar7 != (char *)0x0) && (*(uint *)(lVar4 + 4) != 0)) {
    lVar6 = 0;
    do {
      if (pcVar7[lVar6] == '\0') break;
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < *(uint *)(lVar4 + 4));
    if ((int)lVar6 == -1) {
      _strlen(pcVar7);
    }
  }
  QString::fromUtf8_helper((char *)&local_50,(int)pcVar7);
  QString::normalized(&local_48,&local_50,1,0);
  iVar3 = QString::indexOf(&local_48,param_1 + 1,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f03e5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000f03e5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f0415;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000f0415:
  if (iVar3 != -1) {
    FUN_10078f4f0(&local_58,0x30e09,1,&DAT_1011ccb98,1);
    lVar4 = 0;
    if (local_58 != (long *)0x0) {
      lVar4 = local_58[2];
    }
    lVar6 = *plVar1;
    FUN_10078f730(lVar4,0,0,*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4));
    lVar4 = 0;
    if (local_58 != (long *)0x0) {
      lVar4 = local_58[2];
    }
    puVar5 = (undefined8 *)0x0;
    if (*param_1 != 0) {
      puVar5 = *(undefined8 **)(*param_1 + 0x10);
    }
    uVar2 = *puVar5;
    *(undefined8 *)(lVar4 + 0x18) = puVar5[1];
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    FUN_100433970(*(undefined8 *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18),param_2,&local_58,1);
    FUN_10078f4f0(&local_60,0x30e0a,1,&DAT_1011ccb98,1);
    lVar4 = 0;
    if (local_60 != (long *)0x0) {
      lVar4 = local_60[2];
    }
    lVar6 = *plVar1;
    FUN_10078f730(lVar4,0,0,*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4));
    lVar4 = 0;
    if (local_60 != (long *)0x0) {
      lVar4 = local_60[2];
    }
    puVar5 = (undefined8 *)0x0;
    if (*param_1 != 0) {
      puVar5 = *(undefined8 **)(*param_1 + 0x10);
    }
    uVar2 = *puVar5;
    *(undefined8 *)(lVar4 + 0x18) = puVar5[1];
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    FUN_100433970(*(undefined8 *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18),param_2,&local_60,1);
    FUN_10078f4f0(&local_68,0x30e0c,0,&DAT_1011ccb98,1);
    lVar4 = 0;
    if (local_68 != (long *)0x0) {
      lVar4 = local_68[2];
    }
    puVar5 = (undefined8 *)0x0;
    if (*param_1 != 0) {
      puVar5 = *(undefined8 **)(*param_1 + 0x10);
    }
    uVar2 = *puVar5;
    *(undefined8 *)(lVar4 + 0x18) = puVar5[1];
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    FUN_100433970(*(undefined8 *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18),param_2,&local_68,1);
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  return;
}

