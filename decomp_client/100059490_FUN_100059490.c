
undefined8 FUN_100059490(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  long lVar8;
  char unaff_R14B;
  QString local_500;
  QArrayData *local_4f8;
  QArrayData *local_4f0;
  undefined **local_4e8 [2];
  undefined **local_4d8 [2];
  undefined1 local_4c8 [24];
  QArrayData *local_4b0;
  QArrayData *local_4a8;
  undefined **local_4a0 [2];
  uint local_490;
  undefined1 local_489;
  char local_488 [1024];
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_10005bd60(local_4c8);
  FUN_10005ae70(local_4d8);
  local_4d8[0] = &PTR_FUN_10226c338;
  FUN_10005ae70(local_4e8);
  local_4e8[0] = &PTR_FUN_10226c378;
  iVar3 = FUN_10005bfb0(local_4c8);
  if (iVar3 == 0) {
    iVar3 = FUN_10005c180(local_4c8,local_4d8);
    if (iVar3 == 0) {
      uVar4 = FUN_10005bbd0(local_4d8);
      uVar6 = 1;
      if (uVar4 != 0) {
        lVar8 = 0;
        do {
          FUN_10005bbf0(local_4d8,lVar8,local_4e8);
          FUN_10005ae70(local_4a0);
          local_4a0[0] = &PTR_FUN_10226c2e0;
          local_4a8 = (QArrayData *)PTR_shared_null_1021e1288;
          iVar3 = FUN_10005ba00(local_4e8,&local_490);
          bVar7 = 1;
          cVar1 = unaff_R14B;
          if (iVar3 == 0) {
            if (local_490 < 2) {
              iVar3 = FUN_10005bb40(local_4e8,local_4a0);
              if (iVar3 == 0) {
                iVar3 = FUN_10005b5f0(local_4a0,&local_4a8);
                if ((iVar3 == 9) || (iVar3 == 6)) {
                  bVar7 = 0;
                }
                else if (iVar3 == 0) {
                  local_4b0 = (QArrayData *)QString::fromAscii_helper("com.parallels.winapp.",0x15);
                  cVar1 = QString::startsWith(&local_4a8,&local_4b0,1);
                  if (*(int *)local_4b0 != -1) {
                    if (*(int *)local_4b0 != 0) {
                      LOCK();
                      *(int *)local_4b0 = *(int *)local_4b0 + -1;
                      local_489 = *(int *)local_4b0 != 0;
                      UNLOCK();
                      if ((bool)local_489) goto LAB_10005963c;
                    }
                    QArrayData::deallocate(local_4b0,2,8);
                  }
LAB_10005963c:
                  if (cVar1 == '\0') {
                    cVar1 = '\0';
                  }
                  else {
                    uVar5 = FUN_10005b3f0(local_4a0,local_88);
                    if ((uVar5 < 0xb) && ((0x641U >> (uVar5 & 0x1f) & 1) != 0)) {
                      bVar7 = (byte)(0x1bf >> ((byte)uVar5 & 0x1f)) & 1;
                    }
                    else if (DAT_10230ffd0 < 1) {
                      bVar7 = 0;
                    }
                    else {
                      bVar7 = 0;
                      FUN_100df99c0("SGAC","prl_client_app",1,"Failed to resolve alias, err %i",
                                    uVar5);
                    }
                  }
                }
                else if (DAT_10230ffd0 < 1) {
                  bVar7 = 0;
                }
                else {
                  bVar7 = 0;
                  FUN_100df99c0("SGAC","prl_client_app",1,"Failed to get alias path, err %i",iVar3);
                }
              }
              else {
                cVar1 = '\0';
                if ((iVar3 != 6) && (iVar3 != 9)) {
                  bVar7 = 0;
                  FUN_100df99c0("SGAC","prl_client_app",0,
                                "Failed to get persistent-apps item tile, err %i",iVar3);
                  cVar1 = unaff_R14B;
                }
              }
            }
            else {
              cVar1 = '\0';
            }
          }
          else {
            cVar1 = '\0';
            if ((iVar3 != 6) && (iVar3 != 9)) {
              bVar7 = 0;
              FUN_100df99c0("SGAC","prl_client_app",0,
                            "Failed to get persistent-apps item type, err %i",iVar3);
              cVar1 = unaff_R14B;
            }
          }
          if (*(int *)local_4a8 != -1) {
            if (*(int *)local_4a8 != 0) {
              LOCK();
              *(int *)local_4a8 = *(int *)local_4a8 + -1;
              local_489 = *(int *)local_4a8 != 0;
              UNLOCK();
              if ((bool)local_489) goto LAB_10005987c;
            }
            QArrayData::deallocate(local_4a8,2,8);
          }
LAB_10005987c:
          FUN_10005aeb0(local_4a0);
          if ((cVar1 != '\0') && (bVar7 == 1)) {
            iVar3 = _FSRefMakePath(local_88,local_488,0x400);
            if (iVar3 == 0) {
              _strlen(local_488);
              QString::fromUtf8_helper((char *)&local_4f8,(int)local_488);
              QString::normalized(&local_4f0,&local_4f8,1,0);
              if (*(int *)local_4f8 != -1) {
                if (*(int *)local_4f8 != 0) {
                  LOCK();
                  *(int *)local_4f8 = *(int *)local_4f8 + -1;
                  local_489 = *(int *)local_4f8 != 0;
                  UNLOCK();
                  if ((bool)local_489) goto LAB_100059965;
                }
                QArrayData::deallocate(local_4f8,2,8);
              }
LAB_100059965:
              FUN_100047790(&local_500,&local_4f0);
              cVar2 = operator==(&local_500,(QString *)&DAT_102310840);
              if (*(int *)local_500.field0_0x0 != -1) {
                if (*(int *)local_500.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_500.field0_0x0 = *(int *)local_500.field0_0x0 + -1;
                  local_489 = *(int *)local_500.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_489) goto LAB_1000599c9;
                }
                QArrayData::deallocate((QArrayData *)local_500.field0_0x0,2,8);
              }
LAB_1000599c9:
              if (cVar2 == '\0') {
                FUN_100045e20(&local_4f0,1);
              }
              if (*(int *)local_4f0 != -1) {
                if (*(int *)local_4f0 != 0) {
                  LOCK();
                  *(int *)local_4f0 = *(int *)local_4f0 + -1;
                  local_489 = *(int *)local_4f0 != 0;
                  UNLOCK();
                  if ((bool)local_489) goto LAB_100059a20;
                }
                QArrayData::deallocate(local_4f0,2,8);
              }
            }
            else if (0 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",1,"FSRefMakePath() err %i",iVar3);
            }
          }
LAB_100059a20:
          lVar8 = lVar8 + 1;
          uVar6 = 1;
          unaff_R14B = cVar1;
        } while (lVar8 < (long)(ulong)uVar4);
      }
    }
    else if (DAT_10230ffd0 < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to get persistent-apps section from Dock defaults, err %i",iVar3);
    }
  }
  else if (DAT_10230ffd0 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_100df99c0("SGAC","prl_client_app",1,"Failed to read Dock defaults, err %i",iVar3);
  }
  FUN_10005aeb0(local_4e8);
  FUN_10005aeb0(local_4d8);
  FUN_10005be80(local_4c8);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),uVar6);
}

