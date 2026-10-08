
void FUN_1000cec10(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QString local_248;
  undefined1 local_239;
  char local_238 [512];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar9;
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 0x10);
  if (lVar7 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_250 + *(long *)(local_250 + 0x10));
    if (*(int *)local_250 != -1) {
      local_268 = local_250;
      if (*(int *)local_250 != 0) {
        LOCK();
        *(int *)local_250 = *(int *)local_250 + -1;
        iVar4 = *(int *)local_250;
        UNLOCK();
joined_r0x0001000cee21:
        local_239 = iVar4 != 0;
        if ((bool)local_239) goto LAB_1000cf1cc;
      }
LAB_1000cef5e:
      QArrayData::deallocate(local_268,1,8);
    }
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0) {
      if (lVar9 == local_38) {
        FUN_100df99c0("SGAC","prl_client_app",0,"No autoplay disk present");
        return;
      }
      goto LAB_1000cf1e4;
    }
    uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
    QString::toLatin1();
    lVar8 = _IOBSDNameMatching(uVar1,0,local_258 + *(long *)(local_258 + 0x10));
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_239 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_239) goto LAB_1000cecec;
      }
      QArrayData::deallocate(local_258,1,8);
    }
LAB_1000cecec:
    if (lVar8 == 0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,
                    "Cannot create a matching dictionary for autoplay disk \"%s\"",
                    local_260 + *(long *)(local_260 + 0x10));
      if (*(int *)local_260 != -1) {
        local_268 = local_260;
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          iVar4 = *(int *)local_260;
          UNLOCK();
          goto joined_r0x0001000cee21;
        }
        goto LAB_1000cef5e;
      }
    }
    else {
      iVar4 = _IOServiceGetMatchingService(uVar1,lVar8);
      if (iVar4 == 0) {
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",0,
                      "Cannot get a matching service for autoplay disk \"%s\"",
                      local_268 + *(long *)(local_268 + 0x10));
        lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (*(int *)local_268 != -1) {
          if (*(int *)local_268 != 0) {
            LOCK();
            *(int *)local_268 = *(int *)local_268 + -1;
            iVar4 = *(int *)local_268;
            UNLOCK();
            goto joined_r0x0001000cee21;
          }
          goto LAB_1000cef5e;
        }
      }
      else {
        iVar5 = _IORegistryEntryGetPath(iVar4,"IOService",local_238);
        _IOObjectRelease(iVar4);
        if (iVar5 == 0) {
          _strlen(local_238);
          QString::fromUtf8_helper((char *)&local_248,(int)local_238);
          QString::operator=((QString *)(param_1 + 0xa8),&local_248);
          if (*(int *)local_248.field0_0x0 != -1) {
            if (*(int *)local_248.field0_0x0 != 0) {
              LOCK();
              *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
              local_239 = *(int *)local_248.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_239) goto LAB_1000ceff1;
            }
            QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
          }
LAB_1000ceff1:
          uVar6 = FUN_100152280();
          uVar6 = FUN_1001547d0(uVar6,param_1 + 0x10);
          lVar8 = FUN_10015a340(uVar6);
          lVar9 = **(long **)(lVar8 + 0x148);
          uVar10 = (ulong)*(uint *)(lVar9 + 8);
          if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
            lVar11 = 0;
            do {
              plVar2 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
              lVar9 = FUN_10018f120(lVar7,5,0);
              if (lVar9 != 0) {
                (**(code **)(*plVar2 + 0xb8))(&local_278,plVar2);
                cVar3 = QString::startsWith((QString *)(param_1 + 0xa8),&local_278,1);
                if (*(int *)local_278 != -1) {
                  if (*(int *)local_278 != 0) {
                    LOCK();
                    *(int *)local_278 = *(int *)local_278 + -1;
                    local_239 = *(int *)local_278 != 0;
                    UNLOCK();
                    if ((bool)local_239) goto LAB_1000cf0b9;
                  }
                  QArrayData::deallocate(local_278,2,8);
                }
LAB_1000cf0b9:
                if (cVar3 != '\0') {
                  (**(code **)(*plVar2 + 0xb8))(&local_280,plVar2);
                  (**(code **)(*plVar2 + 0xa8))(&local_288,plVar2);
                  FUN_100147a20(lVar9,&local_280,&local_288,0,0,0,0);
                  if (*(int *)local_288 != -1) {
                    if (*(int *)local_288 != 0) {
                      LOCK();
                      *(int *)local_288 = *(int *)local_288 + -1;
                      local_239 = *(int *)local_288 != 0;
                      UNLOCK();
                      if ((bool)local_239) goto LAB_1000cf177;
                    }
                    QArrayData::deallocate(local_288,2,8);
                  }
LAB_1000cf177:
                  if (*(int *)local_280 != -1) {
                    if (*(int *)local_280 != 0) {
                      LOCK();
                      *(int *)local_280 = *(int *)local_280 + -1;
                      local_239 = *(int *)local_280 != 0;
                      UNLOCK();
                      if ((bool)local_239) goto LAB_1000cf1ba;
                    }
                    QArrayData::deallocate(local_280,2,8);
                  }
LAB_1000cf1ba:
                  *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x28) = 1;
                  break;
                }
              }
              lVar11 = lVar11 + 1;
              lVar9 = **(long **)(lVar8 + 0x148);
              uVar10 = (ulong)*(int *)(lVar9 + 8);
            } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
          }
        }
        else {
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",0,
                        "Cannot get a registry entry path for autoplay disk \"%s\", code %d",
                        local_270 + *(long *)(local_270 + 0x10),iVar5);
          if (*(int *)local_270 != -1) {
            if (*(int *)local_270 != 0) {
              LOCK();
              *(int *)local_270 = *(int *)local_270 + -1;
              local_239 = *(int *)local_270 != 0;
              UNLOCK();
              if ((bool)local_239) goto LAB_1000cf1c2;
            }
            QArrayData::deallocate(local_270,1,8);
          }
        }
LAB_1000cf1c2:
        lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
    }
  }
LAB_1000cf1cc:
  if (lVar9 == local_38) {
    return;
  }
LAB_1000cf1e4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

