
undefined1 FUN_100a8de20(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *local_168;
  QArrayData *local_158;
  QArrayData *local_148;
  QArrayData *local_138;
  undefined1 local_128 [256];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  cVar2 = FUN_100aa9c10();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_100a8e393;
  }
  lVar8 = *(long *)(param_1 + 0x348);
  if (lVar8 == 0) {
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined8 **)(param_1 + 0x348) = puVar7;
      bVar3 = FUN_100a74fe0(param_2);
      *(uint *)(param_1 + 0x38) = bVar3 | 2;
      uVar6 = 2;
      if (*(int *)(param_1 + 0x68) != 2) {
        uVar6 = 1;
      }
      cVar2 = FUN_100aaa810(*(undefined8 *)(param_1 + 0x348),param_2,uVar6);
      if (cVar2 == '\0') {
        uVar4 = 0;
        goto LAB_100a8e393;
      }
      lVar8 = *(long *)(param_1 + 0x348);
      goto LAB_100a8de5d;
    }
    *(undefined8 *)(param_1 + 0x348) = 0;
    pQVar9 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar9 + 1U) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sFailed to create ssl helper object",
                  local_138 + *(long *)(local_138 + 0x10));
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        if (*(int *)local_138 != 0) goto LAB_100a8e1f6;
      }
      QArrayData::deallocate(local_138,1,8);
    }
LAB_100a8e1f6:
    if (*(int *)pQVar9 == -1) {
      uVar4 = 0;
      goto LAB_100a8e393;
    }
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      UNLOCK();
      if (*(int *)pQVar9 != 0) {
        uVar4 = 0;
        goto LAB_100a8e393;
      }
    }
  }
  else {
LAB_100a8de5d:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar6 = FUN_100aaabe0();
    }
    else {
      uVar6 = FUN_100aaabd0(lVar8);
    }
    lVar8 = FUN_100be2f30(uVar6);
    *(long *)(param_1 + 0x328) = lVar8;
    if (lVar8 == 0) {
      uVar6 = FUN_100c63310();
      FUN_100c63950(uVar6,local_128,0x100);
      pQVar9 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar9 + 1U) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sCan\'t create SSL object (SSL error: %s)",
                    local_148 + *(long *)(local_148 + 0x10),local_128);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          UNLOCK();
          if (*(int *)local_148 != 0) goto LAB_100a8e068;
        }
        QArrayData::deallocate(local_148,1,8);
      }
LAB_100a8e068:
      if (*(int *)pQVar9 == -1) {
        uVar4 = 0;
        goto LAB_100a8e393;
      }
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        UNLOCK();
        if (*(int *)pQVar9 != 0) {
          uVar4 = 0;
          goto LAB_100a8e393;
        }
      }
    }
    else {
      iVar5 = FUN_100c5f090(param_1 + 0x330,0x3c00,param_1 + 0x338,0x3c00);
      if (iVar5 == 0) {
        uVar6 = FUN_100c63310();
        FUN_100c63950(uVar6,local_128,0x100);
        pQVar9 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar9 + 1U) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + 1;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",0,"%sCan\'t create SSL bio pair (SSL error: %s)",
                      local_158 + *(long *)(local_158 + 0x10),local_128);
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            UNLOCK();
            if (*(int *)local_158 != 0) goto LAB_100a8e13b;
          }
          QArrayData::deallocate(local_158,1,8);
        }
LAB_100a8e13b:
        if (*(int *)pQVar9 == -1) {
          uVar4 = 0;
          goto LAB_100a8e393;
        }
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          UNLOCK();
          if (*(int *)pQVar9 != 0) {
            uVar4 = 0;
            goto LAB_100a8e393;
          }
        }
      }
      else {
        uVar6 = FUN_100bf0470();
        lVar8 = FUN_100c58530(uVar6);
        *(long *)(param_1 + 0x340) = lVar8;
        if (lVar8 != 0) {
          FUN_100be3970(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330),
                        *(undefined8 *)(param_1 + 0x330));
          FUN_100c58d60(*(undefined8 *)(param_1 + 0x340),0x6d,0,*(undefined8 *)(param_1 + 0x328));
          uVar4 = FUN_100aa80c0(param_1 + 400,*(undefined8 *)(param_1 + 0x328),
                                *(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x338));
          goto LAB_100a8e393;
        }
        uVar6 = FUN_100c63310();
        FUN_100c63950(uVar6,local_128,0x100);
        pQVar9 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar9 + 1U) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + 1;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",0,"%sCan\'t create SSL bio (SSL error: %s)",
                      local_168 + *(long *)(local_168 + 0x10),local_128);
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            UNLOCK();
            if (*(int *)local_168 != 0) goto LAB_100a8e2f7;
          }
          QArrayData::deallocate(local_168,1,8);
        }
LAB_100a8e2f7:
        if (*(int *)pQVar9 == -1) {
          uVar4 = 0;
          goto LAB_100a8e393;
        }
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          UNLOCK();
          if (*(int *)pQVar9 != 0) {
            uVar4 = 0;
            goto LAB_100a8e393;
          }
        }
      }
    }
  }
  QArrayData::deallocate(pQVar9,2,8);
  uVar4 = 0;
LAB_100a8e393:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

