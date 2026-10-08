
void FUN_100a152a0(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  _func_void_Node_ptr *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  _func_void_Node_ptr *local_88;
  QVariant local_80;
  QArrayData *local_70;
  _func_void_Node_ptr *local_68;
  QVariant local_60;
  QArrayData *local_50;
  _func_void_Node_ptr *local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100a15cc0(&local_48,param_1);
  puVar2 = PTR_s_iconId_102280ca8;
  iVar4 = -1;
  if (PTR_s_iconId_102280ca8 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_iconId_102280ca8);
    iVar4 = (int)sVar5;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  FUN_100036660(&local_40,&local_48,&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a1533e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a1533e:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a15369;
    }
    QHashData::free_helper(local_48);
  }
LAB_100a15369:
  FUN_100a15cc0(&local_68,param_1);
  puVar2 = PTR_s_iconSize_102280cb0;
  iVar4 = -1;
  if (PTR_s_iconSize_102280cb0 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_iconSize_102280cb0);
    iVar4 = (int)sVar5;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  FUN_100036660(&local_60,&local_68,&local_70);
  iVar4 = QVariant::toInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a153f5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a153f5:
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a15420;
    }
    QHashData::free_helper(local_68);
  }
LAB_100a15420:
  FUN_100a15cc0(&local_88,param_1);
  puVar2 = PTR_s_hidpi_102280cb8;
  iVar6 = -1;
  if (PTR_s_hidpi_102280cb8 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_hidpi_102280cb8);
    iVar6 = (int)sVar5;
  }
  local_90 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  FUN_100036660(&local_80,&local_88,&local_90);
  bVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_80);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a154b5;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100a154b5:
  if (*(int *)(local_88 + 0x10) != -1) {
    if (*(int *)(local_88 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_88 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a154e0;
    }
    QHashData::free_helper(local_88);
  }
LAB_100a154e0:
  local_b0 = (QArrayData *)QString::fromAscii_helper("%1/icon_%2x%2%3.png",0x13);
  QString::arg(&local_a8,&local_b0,&local_30,0,0x20);
  QString::arg(&local_a0,&local_a8,(long)iVar4,0,10,0x20);
  pcVar7 = "";
  if (bVar3 != 0) {
    pcVar7 = "@2x";
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper(pcVar7,(uint)bVar3 + (uint)bVar3 * 2);
  QString::arg(&local_98,&local_a0,&local_b8,0,0x20);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a155b9;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100a155b9:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a155ef;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100a155ef:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a15625;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100a15625:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a1565b;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100a1565b:
  local_c0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_100a0e170(param_1,2,&local_98,&local_c0);
  if (*(int *)(local_c0 + 0x10) != -1) {
    if (*(int *)(local_c0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_c0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a156b9;
    }
    QHashData::free_helper(local_c0);
  }
LAB_100a156b9:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a156ef;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100a156ef:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

