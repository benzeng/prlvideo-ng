
QStringList * FUN_100033410(QStringList *param_1,ulong param_2)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  long lVar5;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  if (param_2 == 0) {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("NSApplicationPresentationDefault",0x20);
    local_40 = pQVar3;
    FUN_1000341d0(&local_38,&local_40);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000338b7;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      pQVar3 = (QArrayData *)QString::fromAscii_helper("NSApplicationPresentationAutoHideDock",0x25)
      ;
      local_48 = pQVar3;
      FUN_1000341d0(&local_38,&local_48);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100033494;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_100033494:
    if ((param_2 & 2) != 0) {
      pQVar3 = (QArrayData *)QString::fromAscii_helper("NSApplicationPresentationHideDock",0x21);
      local_50 = pQVar3;
      FUN_1000341d0(&local_38,&local_50);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000334eb;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_1000334eb:
    if ((param_2 & 4) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationAutoHideMenuBar",0x28);
      local_58 = pQVar3;
      FUN_1000341d0(&local_38,&local_58);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100033542;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_100033542:
    if ((param_2 & 8) != 0) {
      pQVar3 = (QArrayData *)QString::fromAscii_helper("NSApplicationPresentationHideMenuBar",0x24);
      local_60 = pQVar3;
      FUN_1000341d0(&local_38,&local_60);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100033599;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_100033599:
    if ((param_2 & 0x10) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationDisableAppleMenu",0x29);
      local_68 = pQVar3;
      FUN_1000341d0(&local_38,&local_68);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000335f0;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_1000335f0:
    if ((param_2 & 0x20) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationDisableProcessSwitching",0x30);
      local_70 = pQVar3;
      FUN_1000341d0(&local_38,&local_70);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100033647;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_100033647:
    if ((param_2 & 0x40) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationDisableForceQuit",0x29);
      local_78 = pQVar3;
      FUN_1000341d0(&local_38,&local_78);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10003369e;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_10003369e:
    if ((param_2 & 0x80) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationDisableSessionTermination",0x32);
      local_80 = pQVar3;
      FUN_1000341d0(&local_38,&local_80);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000336f5;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_1000336f5:
    if ((param_2 & 0x100) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationDisableHideApplication",0x2f);
      local_88 = pQVar3;
      FUN_1000341d0(&local_38,&local_88);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10003374c;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_10003374c:
    if ((param_2 & 0x200) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationDisableMenuBarTransparency",0x33)
      ;
      local_90 = pQVar3;
      FUN_1000341d0(&local_38,&local_90);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000337a9;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_1000337a9:
    if ((param_2 & 0x400) != 0) {
      pQVar3 = (QArrayData *)QString::fromAscii_helper("NSApplicationPresentationFullScreen",0x23);
      local_98 = pQVar3;
      FUN_1000341d0(&local_38,&local_98);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100033806;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_100033806:
    if ((param_2 & 0x800) != 0) {
      pQVar3 = (QArrayData *)
               QString::fromAscii_helper("NSApplicationPresentationAutoHideToolbar",0x28);
      local_a0 = pQVar3;
      FUN_1000341d0(&local_38,&local_a0);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000338b7;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
  }
LAB_1000338b7:
  pQVar3 = (QArrayData *)QString::fromAscii_helper(", ",2);
  QtPrivate::QStringList_join
            (param_1,(QChar *)&local_38,(int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10003390c;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10003390c:
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_100033980:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_100033980;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return param_1;
}

