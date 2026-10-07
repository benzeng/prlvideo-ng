
undefined1 FUN_1007b3490(long param_1,undefined8 param_2)

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
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  cVar2 = FUN_1007cf430();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1007b3a03;
  }
  lVar8 = *(long *)(param_1 + 0x348);
  if (lVar8 == 0) {
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined8 **)(param_1 + 0x348) = puVar7;
      bVar3 = FUN_10079a650(param_2);
      *(uint *)(param_1 + 0x38) = bVar3 | 2;
      uVar6 = 2;
      if (*(int *)(param_1 + 0x68) != 2) {
        uVar6 = 1;
      }
      cVar2 = FUN_1007d0030(*(undefined8 *)(param_1 + 0x348),param_2,uVar6);
      if (cVar2 == '\0') {
        uVar4 = 0;
        goto LAB_1007b3a03;
      }
      lVar8 = *(long *)(param_1 + 0x348);
      goto LAB_1007b34cd;
    }
    *(undefined8 *)(param_1 + 0x348) = 0;
    pQVar9 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar9 + 1U) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sFailed to create ssl helper object",
                  local_138 + *(long *)(local_138 + 0x10));
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        if (*(int *)local_138 != 0) goto LAB_1007b3866;
      }
      QArrayData::deallocate(local_138,1,8);
    }
LAB_1007b3866:
    if (*(int *)pQVar9 == -1) {
      uVar4 = 0;
      goto LAB_1007b3a03;
    }
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      UNLOCK();
      if (*(int *)pQVar9 != 0) {
        uVar4 = 0;
        goto LAB_1007b3a03;
      }
    }
  }
  else {
LAB_1007b34cd:
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar6 = FUN_1007d0400();
    }
    else {
      uVar6 = FUN_1007d03f0(lVar8);
    }
    lVar8 = FUN_10080d7c0(uVar6);
    *(long *)(param_1 + 0x328) = lVar8;
    if (lVar8 == 0) {
      uVar6 = FUN_100888110();
      FUN_100888750(uVar6,local_128,0x100);
      pQVar9 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar9 + 1U) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sCan\'t create SSL object (SSL error: %s)",
                    local_148 + *(long *)(local_148 + 0x10),local_128);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          UNLOCK();
          if (*(int *)local_148 != 0) goto LAB_1007b36d8;
        }
        QArrayData::deallocate(local_148,1,8);
      }
LAB_1007b36d8:
      if (*(int *)pQVar9 == -1) {
        uVar4 = 0;
        goto LAB_1007b3a03;
      }
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        UNLOCK();
        if (*(int *)pQVar9 != 0) {
          uVar4 = 0;
          goto LAB_1007b3a03;
        }
      }
    }
    else {
      iVar5 = FUN_100883e90(param_1 + 0x330,0x3c00,param_1 + 0x338,0x3c00);
      if (iVar5 == 0) {
        uVar6 = FUN_100888110();
        FUN_100888750(uVar6,local_128,0x100);
        pQVar9 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar9 + 1U) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + 1;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sCan\'t create SSL bio pair (SSL error: %s)",
                      local_158 + *(long *)(local_158 + 0x10),local_128);
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            UNLOCK();
            if (*(int *)local_158 != 0) goto LAB_1007b37ab;
          }
          QArrayData::deallocate(local_158,1,8);
        }
LAB_1007b37ab:
        if (*(int *)pQVar9 == -1) {
          uVar4 = 0;
          goto LAB_1007b3a03;
        }
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          UNLOCK();
          if (*(int *)pQVar9 != 0) {
            uVar4 = 0;
            goto LAB_1007b3a03;
          }
        }
      }
      else {
        uVar6 = FUN_10081ad00();
        lVar8 = FUN_10087d330(uVar6);
        *(long *)(param_1 + 0x340) = lVar8;
        if (lVar8 != 0) {
          FUN_10080e200(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330),
                        *(undefined8 *)(param_1 + 0x330));
          FUN_10087db60(*(undefined8 *)(param_1 + 0x340),0x6d,0,*(undefined8 *)(param_1 + 0x328));
          uVar4 = FUN_1007cd8e0(param_1 + 400,*(undefined8 *)(param_1 + 0x328),
                                *(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x338));
          goto LAB_1007b3a03;
        }
        uVar6 = FUN_100888110();
        FUN_100888750(uVar6,local_128,0x100);
        pQVar9 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar9 + 1U) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + 1;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sCan\'t create SSL bio (SSL error: %s)",
                      local_168 + *(long *)(local_168 + 0x10),local_128);
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            UNLOCK();
            if (*(int *)local_168 != 0) goto LAB_1007b3967;
          }
          QArrayData::deallocate(local_168,1,8);
        }
LAB_1007b3967:
        if (*(int *)pQVar9 == -1) {
          uVar4 = 0;
          goto LAB_1007b3a03;
        }
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          UNLOCK();
          if (*(int *)pQVar9 != 0) {
            uVar4 = 0;
            goto LAB_1007b3a03;
          }
        }
      }
    }
  }
  QArrayData::deallocate(pQVar9,2,8);
  uVar4 = 0;
LAB_1007b3a03:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

