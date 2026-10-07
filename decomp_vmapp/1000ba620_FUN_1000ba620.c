
undefined8 FUN_1000ba620(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  QArrayData **ppQVar5;
  undefined4 uVar6;
  ulong in_stack_fffffffffffffec0;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  CVmEvent local_120 [8];
  undefined1 local_118 [216];
  QEvent local_40 [39];
  undefined1 local_19;
  
  lVar1 = *(long *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar1 + 0x14);
  if (iVar4 < 0x4e47) {
    if (iVar4 != 0x4e3d) {
      if (iVar4 != 0x4e46) {
        return 0;
      }
      iVar4 = 0;
      if ((*(int *)(lVar1 + 0x28) == 0) || (iVar4 = **(int **)(lVar1 + 0x30), -1 < iVar4)) {
        if (DAT_1011c36a0 == '\0') {
          FUN_1000a78a0(param_1,0);
          FUN_1000a7ae0(param_1,0,1);
          FUN_1000bcf90(param_1,0x186b4);
          uVar3 = 0xe;
        }
        else {
          FUN_1000bcf90(param_1,0x186b3);
          uVar3 = 4;
        }
        FUN_10008ec80(param_1,uVar3);
      }
      else {
        if (iVar4 == -0x7ffffd8b) {
          FUN_10008f910(param_1,0);
          FUN_10008f760(param_1,0x80000275);
          FUN_10008ec80(param_1,0xc);
          FUN_1000bcf90(param_1,0x186a8);
          return 1;
        }
        FUN_10008fa70(param_1,0x3ee);
        iVar4 = 0;
      }
      FUN_10008f760(param_1,iVar4);
      goto LAB_1000ba8cc;
    }
    if ((*(int *)(lVar1 + 0x28) != 0) && (**(long **)(lVar1 + 0x30) != 0)) goto LAB_1000ba8cc;
    uVar3 = *(undefined8 *)(param_1 + 0x1810);
    uVar2 = 2;
  }
  else {
    if (iVar4 != 0x4e4a) {
      if (iVar4 != 0x4e47) {
        return 0;
      }
      local_128 = *(QArrayData **)(DAT_1011c3650 + 0x18);
      if (1 < *(int *)local_128 + 1U) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + 1;
        local_19 = *(int *)local_128 != 0;
        UNLOCK();
      }
      local_130 = (QArrayData *)QString::fromAscii_helper("",0);
      ppQVar5 = &local_130;
      CVmEvent::CVmEvent(local_120,0x186e9,&local_128,0,100000,0,ppQVar5,
                         in_stack_fffffffffffffec0 & 0xffffffff00000000);
      uVar6 = (undefined4)((ulong)ppQVar5 >> 0x20);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_19 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000ba786;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1000ba786:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_19 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000ba7bc;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1000ba7bc:
      if (*(long *)(param_1 + 0x50) == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                      "VirtualPCStates.cpp",CONCAT44(uVar6,0x6c6),"stateVmResuming");
      }
      lVar1 = DAT_1011c3650;
      CBaseNode::toString(SUB81(&local_138,0),SUB81(local_118,0));
      FUN_100063e20(lVar1,&local_138,0xbbb,*(long *)(param_1 + 0x50) + 0x18,1);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_19 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000ba877;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1000ba877:
      QEvent::~QEvent(local_40);
      CVmEventBase::~CVmEventBase((CVmEventBase *)local_120);
      goto LAB_1000ba8cc;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x109c8);
    uVar2 = 0x102;
  }
  FUN_10008fa70(uVar3,uVar2);
LAB_1000ba8cc:
  FUN_10008f910(param_1,0);
  return 1;
}

