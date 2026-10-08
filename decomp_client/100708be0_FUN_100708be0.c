
void FUN_100708be0(void)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int iVar5;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QKeySequence local_b8 [8];
  QKeySequence local_b0 [8];
  QKeySequence local_a8 [8];
  QKeySequence local_a0 [8];
  undefined4 local_98;
  QKeySequence local_90 [8];
  QKeySequence local_88 [8];
  QKeySequence local_80 [8];
  QKeySequence local_78 [8];
  undefined4 local_70;
  QKeySequence local_68 [8];
  QKeySequence local_60 [8];
  undefined4 local_58;
  QKeySequence local_50 [8];
  QKeySequence local_48 [8];
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_1007143b0(local_68);
  QKeySequence::QKeySequence(local_88,0x5000004,0,0,0);
  QKeySequence::QKeySequence(local_90,0x3000007,0,0,0);
  FUN_100714b00(local_80,local_88,local_90);
  QKeySequence::operator=(local_68,local_80);
  QKeySequence::operator=(local_60,local_78);
  local_58 = local_70;
  QKeySequence::~QKeySequence(local_78);
  QKeySequence::~QKeySequence(local_80);
  QKeySequence::~QKeySequence(local_90);
  QKeySequence::~QKeySequence(local_88);
  QKeySequence::QKeySequence(local_b0,0x5000003,0,0,0);
  QKeySequence::QKeySequence(local_b8,0x3000007,0,0,0);
  FUN_100714b00(local_a8,local_b0,local_b8,2);
  QKeySequence::operator=(local_50,local_a8);
  QKeySequence::operator=(local_48,local_a0);
  local_40 = local_98;
  QKeySequence::~QKeySequence(local_a0);
  QKeySequence::~QKeySequence(local_a8);
  QKeySequence::~QKeySequence(local_b8);
  QKeySequence::~QKeySequence(local_b0);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("{B569BAA1-07AF-44BD-91C9-ECBED8B0BAAF}",0x26);
  puVar1 = PTR_s_Windows_102274b40;
  iVar5 = -1;
  if (PTR_s_Windows_102274b40 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Windows_102274b40);
    iVar5 = (int)sVar3;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_c8 = pQVar2;
  local_c0 = pQVar4;
  FUN_100713c20(&DAT_102312388,&local_c8,local_68);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708dfb;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100708dfb:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708e31;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100708e31:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708e5c;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100708e5c:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708e8b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100708e8b:
  QKeySequence::~QKeySequence(local_48);
  QKeySequence::~QKeySequence(local_50);
  QKeySequence::~QKeySequence(local_60);
  QKeySequence::~QKeySequence(local_68);
  return;
}

