
bool FUN_100b8f780(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  QArrayData *local_d8;
  QArrayData *local_d0 [2];
  QMapNodeBase *local_c0;
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  local_d8 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b7e250(local_d0,&local_d8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_41 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100b8f804;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100b8f804:
  iVar3 = FUN_100b7cbd0(local_d0,param_2);
  if (iVar3 == 0) {
    bVar6 = false;
  }
  else {
    iVar3 = FUN_100b8c5c0(local_d0,local_40);
    if (iVar3 == 0) {
      bVar6 = false;
    }
    else {
      if (*(long *)(*(long *)*param_1 + 0x10) == 0) {
LAB_100b8f8a1:
        lVar4 = 0;
      }
      else {
        lVar2 = *(long *)(*(long *)*param_1 + 0x10);
        lVar5 = 0;
        do {
          while (lVar4 = lVar2, iVar3 = _memcmp((void *)(lVar4 + 0x18),local_40,0xb), iVar3 < 0) {
            lVar2 = *(long *)(lVar4 + 0x10);
            if (*(long *)(lVar4 + 0x10) == 0) {
              lVar4 = lVar5;
              if (lVar5 == 0) goto LAB_100b8f8a1;
              goto LAB_100b8f88b;
            }
          }
          lVar2 = *(long *)(lVar4 + 8);
          lVar5 = lVar4;
        } while (*(long *)(lVar4 + 8) != 0);
LAB_100b8f88b:
        iVar3 = _memcmp(local_40,(void *)(lVar4 + 0x18),0xb);
        if (iVar3 < 0) goto LAB_100b8f8a1;
      }
      bVar6 = lVar4 != 0;
    }
  }
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_41 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100b8f8fd;
    }
    if (*(long *)(local_c0 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(local_c0,(int)*(undefined8 *)(local_c0 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_c0);
  }
LAB_100b8f8fd:
  if (*(int *)local_d0[0] != -1) {
    if (*(int *)local_d0[0] != 0) {
      LOCK();
      *(int *)local_d0[0] = *(int *)local_d0[0] + -1;
      local_41 = *(int *)local_d0[0] != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100b8f933;
    }
    QArrayData::deallocate(local_d0[0],2,8);
  }
LAB_100b8f933:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar6;
}

