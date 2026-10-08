
void FUN_100749010(long param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  QArrayData *pQVar8;
  QString *pQVar9;
  long *plVar10;
  long lVar11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  undefined8 *puVar14;
  int *piVar15;
  int *piVar16;
  _func_void_Node_ptr *p_Var17;
  ulong uVar18;
  _func_void_Node_ptr *p_Var19;
  _func_void_Node_ptr *p_Var20;
  bool bVar21;
  QArrayData *local_d8;
  QArrayData *local_d0;
  int *local_c8;
  int *local_c0;
  QString *local_b8;
  QString *local_b0;
  int local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  long local_88;
  QArrayData *local_80;
  QString local_78;
  AnonymousUnion0 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QRegExp local_58 [8];
  _func_void_Node_ptr *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar4 = operator==((QString *)(param_1 + 0x48),(QString *)(param_1 + 0x40));
  if (cVar4 != '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,
                  "Purchase notification for [%s] has been already sent, skipping!",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    uVar18 = 1;
    goto LAB_1007499a0;
  }
  CAbstractWebView::toHtml();
  if (*(int *)(local_48 + 4) != 0) {
    local_50 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0xc) == *(int *)(*(long *)(param_1 + 0x18) + 8))
    goto LAB_1007494ad;
    local_68 = (QArrayData *)QString::fromAscii_helper("<!--\\s*(%1)\\s*=.*\\s*-->",0x17);
    pQVar8 = (QArrayData *)QString::fromAscii_helper("|",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_70.field0,(QChar *)(param_1 + 0x18),
               (int)*(undefined8 *)(pQVar8 + 0x10) + (int)pQVar8);
    QString::arg(&local_60,&local_68,&local_70,0,0x20);
    QRegExp::QRegExp(local_58,&local_60,1,0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10074919e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10074919e:
    if (*(int *)local_70.field1 != -1) {
      if (*(int *)local_70.field1 != 0) {
        LOCK();
        *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
        local_31 = *(int *)local_70.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007491ce;
      }
      QArrayData::deallocate((QArrayData *)local_70.field1,2,8);
    }
LAB_1007491ce:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007491f9;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_1007491f9:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100749229;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100749229:
    QRegExp::setCaseSensitivity(local_58,0);
    QRegExp::setMinimal(SUB81(local_58,0));
    iVar6 = 0;
LAB_100749270:
    do {
      iVar5 = QRegExp::indexIn(local_58,&local_48,iVar6,0);
      if (iVar5 == -1) goto LAB_100749492;
      QRegExp::cap((int)&local_78);
      QRegExp::cap((int)&local_80);
      local_90 = (QArrayData *)QString::fromAscii_helper("=",1);
      QString::split(&local_88,&local_78,&local_90,0,1);
      QString::operator=(&local_78,(QString *)(local_88 + 0x18 + (long)*(int *)(local_88 + 8) * 8));
      FUN_100039a80(&local_88);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100749334;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100749334:
      QString::left((int)&local_a0);
      QString::simplified();
      QString::operator=(&local_78,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10074939d;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_10074939d:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007493d3;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1007493d3:
      pQVar9 = (QString *)FUN_10002c250(&local_50,&local_80);
      QString::operator=(pQVar9,&local_78);
      iVar6 = QRegExp::matchedLength();
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100749427;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100749427:
      iVar6 = iVar6 + iVar5;
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100749270;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    } while( true );
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to parse purchase result!");
  goto LAB_10074997a;
LAB_100749492:
  QRegExp::~QRegExp(local_58);
LAB_1007494ad:
  p_Var12 = local_50;
  uVar2 = *(uint *)(local_50 + 0x20);
  if (uVar2 == 0) {
    bVar21 = false;
  }
  else {
    pQVar9 = (QString *)(param_1 + 0x28);
    uVar7 = qHash(pQVar9,*(uint *)(local_50 + 0x24));
    uVar18 = (ulong)uVar7 % (ulong)uVar2;
    p_Var13 = *(_func_void_Node_ptr **)(*(long *)(p_Var12 + 8) + uVar18 * 8);
    if (p_Var13 != p_Var12) {
      p_Var17 = (_func_void_Node_ptr *)(*(long *)(p_Var12 + 8) + uVar18 * 8);
      do {
        p_Var20 = p_Var12;
        if (*(uint *)(p_Var13 + 8) == uVar7) {
          cVar4 = operator==(pQVar9,(QString *)(p_Var13 + 0x10));
          p_Var12 = *(_func_void_Node_ptr **)p_Var17;
          p_Var13 = p_Var12;
          p_Var20 = local_50;
          if (cVar4 != '\0') break;
        }
        p_Var12 = p_Var20;
        p_Var17 = p_Var13;
        p_Var13 = *(_func_void_Node_ptr **)p_Var17;
        p_Var20 = p_Var12;
      } while (p_Var13 != p_Var12);
      if (p_Var12 != p_Var20) {
        plVar10 = (long *)FUN_10002c250(&local_50,pQVar9);
        bVar21 = *(int *)(*plVar10 + 4) != 0;
        goto LAB_100749552;
      }
    }
    bVar21 = false;
  }
LAB_100749552:
  local_c8 = *(int **)(param_1 + 0x20);
  if (*local_c8 != -1) {
    if (*local_c8 == 0) {
      QListData::detach((int)&local_c8);
      iVar6 = local_c8[2];
      if (iVar6 != local_c8[3]) {
        puVar14 = (undefined8 *)
                  (*(long *)(param_1 + 0x20) + 0x10 +
                  (long)*(int *)(*(long *)(param_1 + 0x20) + 8) * 8);
        piVar15 = local_c8 + (long)iVar6 * 2 + 4;
        lVar11 = (long)local_c8[3] * 8 + (long)iVar6 * -8;
        do {
          piVar16 = (int *)*puVar14;
          *(int **)piVar15 = piVar16;
          if (1 < *piVar16 + 1U) {
            LOCK();
            *piVar16 = *piVar16 + 1;
            local_31 = *piVar16 != 0;
            UNLOCK();
          }
          piVar15 = piVar15 + 2;
          puVar14 = puVar14 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
    }
    else {
      LOCK();
      *local_c8 = *local_c8 + 1;
      local_31 = *local_c8 != 0;
      UNLOCK();
    }
  }
  FUN_1001d3590(&local_c8,(QChar *)(param_1 + 0x18));
  local_c0 = local_c8;
  if (*local_c8 != -1) {
    if (*local_c8 == 0) {
      QListData::detach((int)&local_c0);
      iVar6 = local_c0[2];
      if (iVar6 != local_c0[3]) {
        piVar15 = local_c8 + (long)local_c8[2] * 2 + 4;
        piVar16 = local_c0 + (long)iVar6 * 2 + 4;
        lVar11 = (long)local_c0[3] * 8 + (long)iVar6 * -8;
        do {
          piVar3 = *(int **)piVar15;
          *(int **)piVar16 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar16 = piVar16 + 2;
          piVar15 = piVar15 + 2;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
    }
    else {
      LOCK();
      *local_c8 = *local_c8 + 1;
      local_31 = *local_c8 != 0;
      UNLOCK();
    }
  }
  local_b8 = (QString *)(local_c0 + (long)local_c0[2] * 2 + 4);
  local_b0 = (QString *)(local_c0 + (long)local_c0[3] * 2 + 4);
  local_a8 = 1;
  FUN_100039a80(&local_c8);
  if (local_a8 != 0) {
    for (; p_Var12 = local_50, pQVar9 = local_b8, local_b8 != local_b0; local_b8 = local_b8 + 1) {
      uVar2 = *(uint *)(local_50 + 0x20);
      p_Var13 = p_Var12;
      if (uVar2 == 0) {
LAB_1007497a0:
        uVar2 = *(uint *)(p_Var13 + 0x20);
        if (uVar2 == 0) {
LAB_100749890:
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",0,"Error: Purchase failed! Can\'t find [%s]",
                        local_d0 + *(long *)(local_d0 + 0x10));
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007498fe;
            }
            QArrayData::deallocate(local_d0,1,8);
          }
        }
        else {
          uVar7 = qHash(pQVar9,*(uint *)(p_Var13 + 0x24));
          uVar18 = (ulong)uVar7 % (ulong)uVar2;
          p_Var12 = *(_func_void_Node_ptr **)(*(long *)(p_Var13 + 8) + uVar18 * 8);
          if (p_Var12 == p_Var13) goto LAB_100749890;
          p_Var17 = (_func_void_Node_ptr *)(*(long *)(p_Var13 + 8) + uVar18 * 8);
          do {
            p_Var20 = p_Var13;
            if (*(uint *)(p_Var12 + 8) == uVar7) {
              cVar4 = operator==(pQVar9,(QString *)(p_Var12 + 0x10));
              p_Var13 = *(_func_void_Node_ptr **)p_Var17;
              p_Var12 = p_Var13;
              p_Var20 = local_50;
              if (cVar4 != '\0') break;
            }
            p_Var13 = p_Var20;
            p_Var17 = p_Var12;
            p_Var12 = *(_func_void_Node_ptr **)p_Var17;
            p_Var20 = p_Var13;
          } while (p_Var12 != p_Var13);
          if (p_Var13 == p_Var20) goto LAB_100749890;
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",0,"Error: Purchase failed! No value for [%s]",
                        local_d8 + *(long *)(local_d8 + 0x10));
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007498fe;
            }
            QArrayData::deallocate(local_d8,1,8);
          }
        }
LAB_1007498fe:
        bVar21 = false;
      }
      else {
        uVar7 = qHash(local_b8,*(uint *)(local_50 + 0x24));
        uVar18 = (ulong)uVar7 % (ulong)uVar2;
        p_Var17 = *(_func_void_Node_ptr **)(*(long *)(p_Var12 + 8) + uVar18 * 8);
        if (p_Var17 == p_Var12) goto LAB_1007497a0;
        p_Var20 = (_func_void_Node_ptr *)(*(long *)(p_Var12 + 8) + uVar18 * 8);
        do {
          p_Var19 = p_Var17;
          p_Var13 = p_Var12;
          if (*(uint *)(p_Var17 + 8) == uVar7) {
            cVar4 = operator==(pQVar9,(QString *)(p_Var17 + 0x10));
            p_Var12 = *(_func_void_Node_ptr **)p_Var20;
            p_Var19 = p_Var12;
            p_Var13 = local_50;
            if (cVar4 != '\0') break;
          }
          p_Var12 = p_Var13;
          p_Var17 = *(_func_void_Node_ptr **)p_Var19;
          p_Var13 = p_Var12;
          p_Var20 = p_Var19;
        } while (p_Var17 != p_Var12);
        if ((p_Var12 == p_Var13) ||
           (plVar10 = (long *)FUN_10002c250(&local_50,pQVar9), p_Var13 = local_50,
           *(int *)(*plVar10 + 4) == 0)) goto LAB_1007497a0;
      }
      local_a8 = 1;
    }
  }
  FUN_100039a80(&local_c0);
  FUN_10073fe70(*(undefined8 *)(param_1 + 0x30),bVar21,&local_50);
  QString::operator=((QString *)(param_1 + 0x48),(QString *)(param_1 + 0x40));
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10074997a;
    }
    QHashData::free_helper(local_50);
  }
LAB_10074997a:
  if (*(int *)local_48 == -1) {
    return;
  }
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return;
    }
    local_31 = 0;
  }
  uVar18 = 2;
  local_40 = local_48;
LAB_1007499a0:
  QArrayData::deallocate(local_40,uVar18,8);
  return;
}

