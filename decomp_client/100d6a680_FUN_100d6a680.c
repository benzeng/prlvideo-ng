
int FUN_100d6a680(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Data *pDVar5;
  long *plVar6;
  QArrayData *pQVar7;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("\\",1);
  QString::split(&local_40,param_2,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d6a6fa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d6a6fa:
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00005.03:");
    iVar2 = 0x8158003;
  }
  else {
    uVar3 = (ulong)*(uint *)(local_40 + 8);
    lVar4 = 0;
    if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
      while( true ) {
        iVar2 = (**(code **)(*plVar6 + 0x10))
                          (plVar6,local_40 + ((int)uVar3 + lVar4) * 8 + 0x10,param_3,param_4);
        if ((iVar2 != 0x8000000) &&
           ((iVar2 != 0x815800d ||
            (iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                               (*(long **)(param_1 + 0x10),
                                local_40 + (*(int *)(local_40 + 8) + lVar4) * 8 + 0x10,param_3,
                                param_4), iVar2 != 0x8000000)))) goto LAB_100d6a7e3;
        lVar4 = lVar4 + 1;
        uVar3 = (ulong)*(int *)(local_40 + 8);
        if ((long)((long)*(int *)(local_40 + 0xc) - uVar3) <= lVar4) break;
        param_4 = *param_3;
        plVar6 = *(long **)(param_1 + 0x10);
      }
    }
    iVar2 = 0x8000000;
    (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),1);
  }
LAB_100d6a7e3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100d6a850:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100d6a850;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
  }
  return iVar2;
}

