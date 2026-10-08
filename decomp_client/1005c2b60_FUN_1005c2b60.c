
char FUN_1005c2b60(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  QArrayData *local_f8;
  undefined1 local_f0 [24];
  long local_d8;
  undefined1 local_b0 [88];
  undefined1 local_58 [47];
  undefined1 local_29;
  
  lVar1 = *(long *)(param_1 + 0x18);
  cVar7 = '\n';
  switch(*(undefined4 *)(lVar1 + 0x50)) {
  case 0:
    break;
  case 1:
    cVar7 = '\x15';
    break;
  default:
    cVar7 = '\a';
    break;
  case 4:
    cVar7 = '\v';
    break;
  case 5:
    pQVar2 = *(QArrayData **)(lVar1 + 0x98);
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    iVar5 = QString::compare_helper
                      (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                       PTR_s_ModernIE_102275038,0xffffffff,1);
    bVar8 = true;
    if (iVar5 != 0) {
      pQVar3 = *(QArrayData **)(*(long *)(param_1 + 0x18) + 0x98);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      iVar5 = QString::compare_helper
                        (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                         PTR_s_Windows_10_development_102275048,0xffffffff,1);
      bVar8 = iVar5 == 0;
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005c2c78;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_1005c2c78:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005c2ca5;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_1005c2ca5:
    cVar7 = !bVar8 + '\x11';
    break;
  case 6:
    FUN_1005b69c0(local_b0,lVar1);
    cVar4 = FUN_10073dd70(local_b0);
    FUN_100252c80(local_58);
    cVar7 = '\f';
    if (cVar4 != '\0') {
      cVar7 = '\0';
    }
    FUN_100252e70(local_b0);
    break;
  case 7:
    cVar7 = '\x17';
    break;
  case 8:
    local_f8 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
    uVar6 = FUN_1005b8a40(lVar1,&local_f8);
    FUN_100746ae0(local_f0,uVar6);
    iVar5 = *(int *)(local_d8 + 4);
    FUN_10012ac30(local_f0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        UNLOCK();
        if (*(int *)local_f8 != 0) goto LAB_1005c2d89;
        local_29 = 0;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1005c2d89:
    cVar7 = '\x14';
    if (iVar5 != 0) {
      cVar7 = '\x11';
    }
    break;
  case 9:
    cVar7 = '\x11';
    break;
  case 10:
    cVar7 = '\b';
  }
  return cVar7;
}

