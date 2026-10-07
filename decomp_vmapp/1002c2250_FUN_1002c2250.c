
int FUN_1002c2250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  QArrayData *pQVar12;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  QArrayData *local_2b8;
  QString local_2b0;
  undefined4 local_2a4;
  undefined1 local_2a0 [28];
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 *local_278;
  undefined4 *puStack_270;
  undefined4 *local_268;
  undefined4 local_254;
  QArrayData *local_250;
  QArrayData *local_248;
  undefined1 local_239;
  char local_238 [512];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_4 = 1;
  local_38 = lVar8;
  iVar3 = FUN_1002c6e30(param_2);
  iVar4 = 1;
  if (iVar3 != 0) goto LAB_1002c2a33;
  QString::QString(&local_2b0,0x7c);
  QString::section(&local_2b8,param_2,&local_2b0,0,0,0);
  if (*(int *)local_2b0.field0_0x0 != -1) {
    if (*(int *)local_2b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2b0.field0_0x0 = *(int *)local_2b0.field0_0x0 + -1;
      local_239 = *(int *)local_2b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_1002c2305;
    }
    QArrayData::deallocate((QArrayData *)local_2b0.field0_0x0,2,8);
  }
LAB_1002c2305:
  iVar4 = QString::toUInt((bool *)&local_2b8,0);
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_239 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_1002c235a;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_1002c235a:
  lVar7 = _IOServiceMatching("IOMedia");
  if (lVar7 == 0) {
    iVar4 = 0;
    if (-1 < DAT_1011c568c) {
      iVar4 = 0;
      FUN_1008e3970("","USB",0,"Can\'t create a matching dictionary!");
    }
    goto LAB_1002c2a33;
  }
  _CFDictionarySetValue(lVar7,&cf_Whole,*(undefined8 *)PTR__kCFBooleanTrue_100ba23c8);
  local_2bc = 0;
  iVar3 = _IOServiceGetMatchingServices
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar7,&local_2bc);
  if (iVar3 == 0) {
    iVar3 = _IOIteratorIsValid(local_2bc);
    if (iVar3 == 0) {
      iVar3 = 1;
      bVar11 = false;
    }
    else {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
      iVar3 = 1;
      bVar11 = false;
      do {
        iVar5 = _IOIteratorNext(local_2bc);
        if (iVar5 == 0) break;
        lVar8 = _IORegistryEntrySearchCFProperty(iVar5,"IOService",&cf_locationID,uVar1,3);
        if (lVar8 != 0) {
          lVar7 = _CFGetTypeID(lVar8);
          lVar9 = _CFNumberGetTypeID();
          if (lVar7 == lVar9) {
            local_2c0 = -1;
            _CFNumberGetValue(lVar8,9,&local_2c0);
            if (2 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"EjectUsbMedia(0x%x): loc 0x%x",iVar4,local_2c0);
            }
            bVar2 = bVar11;
            if (local_2c0 == iVar4) {
              local_238[0] = '\0';
              iVar6 = _IORegistryEntryGetPath(iVar5,"IOService",local_238);
              if (iVar6 == 0) {
                if (local_238[0] == '\0') {
                  iVar3 = 0;
                  if (-1 < DAT_1011c568c) {
                    QString::toUtf8();
                    FUN_1008e3970("","USB",0,"unmountMedia: empty path for %s",
                                  local_250 + *(long *)(local_250 + 0x10));
                    if (*(int *)local_250 != -1) {
                      pQVar12 = local_250;
                      if (*(int *)local_250 != 0) {
                        LOCK();
                        *(int *)local_250 = *(int *)local_250 + -1;
                        iVar6 = *(int *)local_250;
                        UNLOCK();
                        goto joined_r0x0001002c2744;
                      }
                      goto LAB_1002c2751;
                    }
                  }
                }
                else {
                  if (-1 < DAT_1011c568c) {
                    FUN_1008e3970("","USB",0,"unmountMedia path <%s>",local_238);
                  }
                  local_254 = 0;
                  iVar6 = FUN_1002c5f90(local_238,&local_254);
                  iVar3 = 1;
                  if (iVar6 == 0) {
                    local_278 = (undefined4 *)0x0;
                    puStack_270 = (undefined4 *)0x0;
                    local_268 = (undefined4 *)0x0;
                    local_27c = 0x3e82;
                    FUN_10002de70(&local_278,&local_27c);
                    local_280 = 0x3e83;
                    if (puStack_270 == local_268) {
                      FUN_10002de70(&local_278,&local_280);
                    }
                    else {
                      *puStack_270 = 0x3e83;
                      puStack_270 = puStack_270 + 1;
                    }
                    local_284 = 0x3ea4;
                    if (puStack_270 == local_268) {
                      FUN_10002de70(&local_278,&local_284);
                    }
                    else {
                      *puStack_270 = 0x3ea4;
                      puStack_270 = puStack_270 + 1;
                    }
                    FUN_10006a060(local_2a0);
                    FUN_10006a120(local_2a0,param_3,0);
                    iVar6 = FUN_1000648b0(DAT_1011c3650,0x80008001,&local_278,local_2a0);
                    iVar3 = 0;
                    if (iVar6 == 0x3e82) {
                      local_2a4 = 2;
                      iVar3 = FUN_1002c5f90(local_238,&local_2a4);
                    }
                    FUN_10006a680(local_2a0);
                    if (local_278 != (undefined4 *)0x0) {
                      if (puStack_270 != local_278) {
                        puStack_270 = (undefined4 *)
                                      ((~((long)puStack_270 + (-4 - (long)local_278)) &
                                       0xfffffffffffffffcU) + (long)puStack_270);
                      }
                      operator_delete(local_278);
                    }
                  }
                }
              }
              else {
                iVar3 = 0;
                if (-1 < DAT_1011c568c) {
                  QString::toUtf8();
                  FUN_1008e3970("","USB",0,"unmountMedia: failed to get path for %s: err 0x%x",
                                local_248 + *(long *)(local_248 + 0x10),iVar6);
                  if (*(int *)local_248 != -1) {
                    pQVar12 = local_248;
                    if (*(int *)local_248 != 0) {
                      LOCK();
                      *(int *)local_248 = *(int *)local_248 + -1;
                      iVar6 = *(int *)local_248;
                      UNLOCK();
joined_r0x0001002c2744:
                      iVar3 = 0;
                      local_239 = iVar6 != 0;
                      if ((bool)local_239) goto LAB_1002c2869;
                    }
LAB_1002c2751:
                    iVar3 = 0;
                    QArrayData::deallocate(pQVar12,1,8);
                  }
                }
              }
LAB_1002c2869:
              bVar2 = true;
              if ((iVar3 == 0) && (iVar3 = 0, bVar2 = bVar11, -1 < DAT_1011c568c)) {
                iVar3 = 0;
                FUN_1008e3970("","USB",0,"EjectUsbMedia(0x%x): failed for loc 0x%x",iVar4,local_2c0)
                ;
              }
            }
            bVar11 = bVar2;
            _CFRelease(lVar8);
          }
        }
        _IOObjectRelease(iVar5);
        iVar5 = _IOIteratorIsValid(local_2bc);
      } while (iVar5 != 0);
    }
    _IOObjectRelease(local_2bc);
    iVar4 = iVar3;
    if (!bVar11) {
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (DAT_1011c568c < 0) goto LAB_1002c2a33;
      QString::toUtf8();
      lVar7 = *(long *)(local_2c8 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","USB",0,"EjectUsbMedia: no matched services found for \'%s\':\'%s\'",
                    local_2c8 + lVar7,local_2d0 + *(long *)(local_2d0 + 0x10));
      if (*(int *)local_2d0 != -1) {
        if (*(int *)local_2d0 != 0) {
          LOCK();
          *(int *)local_2d0 = *(int *)local_2d0 + -1;
          local_239 = *(int *)local_2d0 != 0;
          UNLOCK();
          if ((bool)local_239) goto LAB_1002c29c5;
        }
        QArrayData::deallocate(local_2d0,1,8);
      }
LAB_1002c29c5:
      if (*(int *)local_2c8 != -1) {
        if (*(int *)local_2c8 != 0) {
          LOCK();
          *(int *)local_2c8 = *(int *)local_2c8 + -1;
          local_239 = *(int *)local_2c8 != 0;
          UNLOCK();
          if ((bool)local_239) goto LAB_1002c2a33;
        }
        QArrayData::deallocate(local_2c8,1,8);
      }
      goto LAB_1002c2a33;
    }
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (DAT_1011c568c < 2) goto LAB_1002c2a33;
    pcVar10 = "EjectUsbMedia finished %u";
  }
  else {
    iVar4 = 0;
    if (DAT_1011c568c < 0) goto LAB_1002c2a33;
    pcVar10 = "Can\'t create a service iterator (0x%X)!";
    iVar4 = 0;
  }
  FUN_1008e3970("","USB",0,pcVar10,iVar3);
LAB_1002c2a33:
  if (lVar8 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

