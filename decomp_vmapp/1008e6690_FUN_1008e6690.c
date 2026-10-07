
undefined8 * FUN_1008e6690(undefined8 *param_1,bool *param_2,char *param_3)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  Node *pNVar6;
  QMapNodeBase *pQVar7;
  ulong *puVar8;
  Node *pNVar9;
  QMapNodeBase *pQVar10;
  uint uVar11;
  long *plVar12;
  Node *pNVar13;
  QMapNodeBase *pQVar14;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  double dVar18;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  undefined *local_130;
  QMapNodeBase *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined *local_e8;
  Node *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  uint local_a0;
  undefined1 local_98 [8];
  undefined *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int local_50;
  int local_48;
  int local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  local_88 = (QArrayData *)PTR_shared_null_100ba20d0;
  *param_3 = '\x01';
  if ((*(uint *)(param_2 + 8) & 0x3fffffff) == 0) {
    QByteArray::operator=((QByteArray *)&local_88,"null");
    goto LAB_1008e6a86;
  }
  iVar4 = QVariant::type();
  if ((iVar4 == 9) || (iVar4 = QVariant::type(), iVar4 == 0xb)) {
    local_90 = PTR_shared_null_100ba2188;
    QVariant::toList();
    FUN_100022be0(&local_b8,local_98);
    local_b0 = (undefined8 *)(local_b8 + 0x10 + (long)*(int *)(local_b8 + 8) * 8);
    local_a8 = (undefined8 *)(local_b8 + 0x10 + (long)*(int *)(local_b8 + 0xc) * 8);
    local_a0 = 1;
    if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
      do {
        if (local_a0 == 0) {
LAB_1008e683a:
          local_b0 = local_b0 + 1;
          local_a0 = 1;
        }
        else {
          local_31 = 1;
          FUN_1008e6690(&local_c0,*local_b0,&local_31);
          cVar3 = QByteArray::isNull();
          if (cVar3 == '\0') {
            iVar4 = 0;
            FUN_100050840(&local_90,&local_c0);
          }
          else {
            *param_3 = '\0';
            iVar4 = 5;
          }
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_34 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e67f3;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_1008e67f3:
          if (iVar4 == 0) goto LAB_1008e683a;
          local_b0 = local_b0 + 1;
          uVar11 = local_a0 ^ 1;
          bVar17 = local_a0 == 1;
          local_a0 = uVar11;
          if (bVar17) break;
        }
      } while (local_b0 != local_a8);
    }
    FUN_100022290(&local_b8);
    QByteArray::QByteArray((QByteArray *)&local_d8,", ",-1);
    FUN_1008e86a0(&local_d0,&local_90,&local_d8);
    QByteArray::QByteArray((QByteArray *)&local_80,"[ ",-1);
    puVar5 = (undefined8 *)QByteArray::append((QByteArray *)&local_80);
    pQVar1 = (QArrayData *)*puVar5;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_34 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_34 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1008e690f;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1008e690f:
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_34 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_78 = pQVar1;
    puVar5 = (undefined8 *)QByteArray::append((char *)&local_78);
    local_c8 = (QArrayData *)*puVar5;
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_34 = *(int *)local_c8 != 0;
      UNLOCK();
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_34 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1008e697f;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1008e697f:
    QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_34 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1008e69c5;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_1008e69c5:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_34 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1008e69f0;
      }
      QArrayData::deallocate(pQVar1,1,8);
    }
LAB_1008e69f0:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_34 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1008e6a26;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_1008e6a26:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_34 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_1008e6a5c;
      }
      QArrayData::deallocate(local_d8,1,8);
    }
LAB_1008e6a5c:
    FUN_100022290(local_98);
    FUN_1000506b0(&local_90);
LAB_1008e6a86:
    if (*param_3 != '\0') {
      *param_1 = local_88;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_34 = *(int *)local_88 != 0;
        UNLOCK();
      }
      goto LAB_1008e7abc;
    }
  }
  else {
    iVar4 = QVariant::type();
    if (iVar4 == 0x1c) {
      QVariant::toHash();
      pNVar13 = local_e0;
      if (1 < *(int *)(local_e0 + 0x10) + 1U) {
        LOCK();
        pNVar6 = local_e0 + 0x10;
        *(int *)pNVar6 = *(int *)pNVar6 + 1;
        local_34 = *(int *)pNVar6 != 0;
        UNLOCK();
      }
      pNVar6 = local_e0;
      if ((((byte)local_e0[0x28] & 1) == 0) && (1 < *(uint *)(local_e0 + 0x10))) {
        pNVar6 = (Node *)QHashData::detach_helper
                                   ((_func_void_Node_ptr_void_ptr *)local_e0,FUN_1008e90b0,0x8e9010,
                                    0x28);
        if (*(int *)(pNVar13 + 0x10) != -1) {
          if (*(int *)(pNVar13 + 0x10) != 0) {
            LOCK();
            pNVar9 = pNVar13 + 0x10;
            *(int *)pNVar9 = *(int *)pNVar9 + -1;
            local_34 = *(int *)pNVar9 != 0;
            UNLOCK();
            if ((bool)local_34) goto LAB_1008e6cf6;
          }
          QHashData::free_helper((_func_void_Node_ptr *)pNVar13);
        }
      }
LAB_1008e6cf6:
      iVar4 = *(int *)(pNVar6 + 0x20);
      pNVar13 = pNVar6;
      if (iVar4 != 0) {
        plVar12 = *(long **)(pNVar6 + 8);
        do {
          pNVar13 = (Node *)*plVar12;
          if ((Node *)*plVar12 != pNVar6) break;
          iVar4 = iVar4 + -1;
          plVar12 = plVar12 + 1;
          pNVar13 = pNVar6;
        } while (iVar4 != 0);
      }
      QByteArray::operator=((QByteArray *)&local_88,"{ ");
      local_e8 = PTR_shared_null_100ba2188;
      do {
        if (pNVar13 == pNVar6) break;
        pNVar9 = (Node *)QHashData::nextNode(pNVar13);
        local_32 = 1;
        FUN_1008e6690(&local_f0,pNVar13 + 0x18,&local_32);
        cVar3 = QByteArray::isNull();
        if (cVar3 == '\0') {
          local_110 = *(QArrayData **)(pNVar13 + 0x10);
          if (1 < *(int *)local_110 + 1U) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + 1;
            local_34 = *(int *)local_110 != 0;
            UNLOCK();
          }
          FUN_1008e8810(&local_108,&local_110);
          QString::toUtf8();
          local_70 = local_100;
          if (1 < *(int *)local_100 + 1U) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + 1;
            local_34 = *(int *)local_100 != 0;
            UNLOCK();
          }
          puVar5 = (undefined8 *)QByteArray::append((char *)&local_70);
          pQVar1 = (QArrayData *)*puVar5;
          if (1 < *(int *)pQVar1 + 1U) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + 1;
            local_34 = *(int *)pQVar1 != 0;
            UNLOCK();
          }
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_34 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e6e67;
            }
            QArrayData::deallocate(local_70,1,8);
          }
LAB_1008e6e67:
          if (1 < *(int *)pQVar1 + 1U) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + 1;
            local_34 = *(int *)pQVar1 != 0;
            UNLOCK();
          }
          local_68 = pQVar1;
          puVar5 = (undefined8 *)QByteArray::append((QByteArray *)&local_68);
          pQVar2 = (QArrayData *)*puVar5;
          if (1 < *(int *)pQVar2 + 1U) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            local_34 = *(int *)pQVar2 != 0;
            UNLOCK();
          }
          local_f8 = pQVar2;
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_34 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e6edc;
            }
            QArrayData::deallocate(local_68,1,8);
          }
LAB_1008e6edc:
          FUN_100050840(&local_e8,&local_f8);
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              local_34 = *(int *)pQVar2 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e6f1e;
            }
            QArrayData::deallocate(pQVar2,1,8);
          }
LAB_1008e6f1e:
          if (*(int *)pQVar1 != -1) {
            if (*(int *)pQVar1 != 0) {
              LOCK();
              *(int *)pQVar1 = *(int *)pQVar1 + -1;
              local_34 = *(int *)pQVar1 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e6f4e;
            }
            QArrayData::deallocate(pQVar1,1,8);
          }
LAB_1008e6f4e:
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_34 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e6f8e;
            }
            QArrayData::deallocate(local_100,1,8);
          }
LAB_1008e6f8e:
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_34 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e6fc4;
            }
            QArrayData::deallocate(local_108,2,8);
          }
LAB_1008e6fc4:
          iVar4 = 0;
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_34 = *(int *)local_110 != 0;
              UNLOCK();
              iVar4 = 0;
              if ((bool)local_34) goto LAB_1008e7000;
            }
            QArrayData::deallocate(local_110,2,8);
            iVar4 = 0;
          }
        }
        else {
          *param_3 = '\0';
          iVar4 = 9;
        }
LAB_1008e7000:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_34 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_34) goto LAB_1008e7036;
          }
          QArrayData::deallocate(local_f0,1,8);
        }
LAB_1008e7036:
        pNVar13 = pNVar9;
      } while (iVar4 == 0);
      QByteArray::QByteArray((QByteArray *)&local_120,", ",-1);
      FUN_1008e86a0(&local_118,&local_e8,&local_120);
      QByteArray::append((QByteArray *)&local_88);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_34 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e70b9;
        }
        QArrayData::deallocate(local_118,1,8);
      }
LAB_1008e70b9:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_34 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e70ef;
        }
        QArrayData::deallocate(local_120,1,8);
      }
LAB_1008e70ef:
      QByteArray::append((char *)&local_88);
      FUN_1000506b0(&local_e8);
      if (*(int *)(pNVar6 + 0x10) != -1) {
        if (*(int *)(pNVar6 + 0x10) != 0) {
          LOCK();
          pNVar13 = pNVar6 + 0x10;
          *(int *)pNVar13 = *(int *)pNVar13 + -1;
          local_34 = *(int *)pNVar13 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e713e;
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
      }
LAB_1008e713e:
      if (*(int *)(local_e0 + 0x10) != -1) {
        if (*(int *)(local_e0 + 0x10) != 0) {
          LOCK();
          pNVar13 = local_e0 + 0x10;
          *(int *)pNVar13 = *(int *)pNVar13 + -1;
          local_34 = *(int *)pNVar13 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_e0);
      }
      goto LAB_1008e6a86;
    }
    iVar4 = QVariant::type();
    if (iVar4 == 8) {
      QVariant::toMap();
      if (*(int *)local_128 == 0) {
        pQVar7 = (QMapNodeBase *)QMapDataBase::createData();
        if (*(long *)(local_128 + 0x10) != 0) {
          puVar8 = (ulong *)FUN_1004a1030(*(long *)(local_128 + 0x10),pQVar7);
          *(ulong **)(pQVar7 + 0x10) = puVar8;
          *puVar8 = *puVar8 & 3 | (ulong)(pQVar7 + 8);
          QMapDataBase::recalcMostLeftNode();
        }
      }
      else {
        pQVar7 = local_128;
        if (*(int *)local_128 != -1) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + 1;
          local_34 = *(int *)local_128 != 0;
          UNLOCK();
        }
      }
      if (*(long *)(pQVar7 + 0x10) == 0) {
        pQVar14 = pQVar7 + 8;
      }
      else {
        pQVar14 = *(QMapNodeBase **)(pQVar7 + 0x20);
      }
      QByteArray::operator=((QByteArray *)&local_88,"{ ");
      local_130 = PTR_shared_null_100ba2188;
      do {
        if (pQVar14 == pQVar7 + 8) break;
        pQVar10 = (QMapNodeBase *)QMapNodeBase::nextNode();
        local_33 = 1;
        FUN_1008e6690(&local_138,pQVar14 + 0x20,&local_33);
        cVar3 = QByteArray::isNull();
        if (cVar3 == '\0') {
          local_158 = *(QArrayData **)(pQVar14 + 0x18);
          if (1 < *(int *)local_158 + 1U) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + 1;
            local_34 = *(int *)local_158 != 0;
            UNLOCK();
          }
          FUN_1008e8810(&local_150,&local_158);
          QString::toUtf8();
          local_60 = local_148;
          if (1 < *(int *)local_148 + 1U) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + 1;
            local_34 = *(int *)local_148 != 0;
            UNLOCK();
          }
          puVar5 = (undefined8 *)QByteArray::append((char *)&local_60);
          pQVar1 = (QArrayData *)*puVar5;
          if (1 < *(int *)pQVar1 + 1U) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + 1;
            local_34 = *(int *)pQVar1 != 0;
            UNLOCK();
          }
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_34 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e72f9;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_1008e72f9:
          if (1 < *(int *)pQVar1 + 1U) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + 1;
            local_34 = *(int *)pQVar1 != 0;
            UNLOCK();
          }
          local_58 = pQVar1;
          puVar5 = (undefined8 *)QByteArray::append((QByteArray *)&local_58);
          pQVar2 = (QArrayData *)*puVar5;
          if (1 < *(int *)pQVar2 + 1U) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            local_34 = *(int *)pQVar2 != 0;
            UNLOCK();
          }
          local_140 = pQVar2;
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_34 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e7369;
            }
            QArrayData::deallocate(local_58,1,8);
          }
LAB_1008e7369:
          FUN_100050840(&local_130,&local_140);
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              local_34 = *(int *)pQVar2 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e73a7;
            }
            QArrayData::deallocate(pQVar2,1,8);
          }
LAB_1008e73a7:
          if (*(int *)pQVar1 != -1) {
            if (*(int *)pQVar1 != 0) {
              LOCK();
              *(int *)pQVar1 = *(int *)pQVar1 + -1;
              local_34 = *(int *)pQVar1 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e73d6;
            }
            QArrayData::deallocate(pQVar1,1,8);
          }
LAB_1008e73d6:
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_34 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e7413;
            }
            QArrayData::deallocate(local_148,1,8);
          }
LAB_1008e7413:
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_34 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_34) goto LAB_1008e744c;
            }
            QArrayData::deallocate(local_150,2,8);
          }
LAB_1008e744c:
          iVar4 = 0;
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_34 = *(int *)local_158 != 0;
              UNLOCK();
              iVar4 = 0;
              if ((bool)local_34) goto LAB_1008e7490;
            }
            QArrayData::deallocate(local_158,2,8);
            iVar4 = 0;
          }
        }
        else {
          *param_3 = '\0';
          iVar4 = 0xb;
        }
LAB_1008e7490:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_34 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_34) goto LAB_1008e74c6;
          }
          QArrayData::deallocate(local_138,1,8);
        }
LAB_1008e74c6:
        pQVar14 = pQVar10;
      } while (iVar4 == 0);
      QByteArray::QByteArray((QByteArray *)&local_168,", ",-1);
      FUN_1008e86a0(&local_160,&local_130,&local_168);
      QByteArray::append((QByteArray *)&local_88);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_34 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e7550;
        }
        QArrayData::deallocate(local_160,1,8);
      }
LAB_1008e7550:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_34 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e7586;
        }
        QArrayData::deallocate(local_168,1,8);
      }
LAB_1008e7586:
      QByteArray::append((char *)&local_88);
      FUN_1000506b0(&local_130);
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_34 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e75eb;
        }
        if (*(long *)(pQVar7 + 0x10) != 0) {
          FUN_1004a11c0();
          QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar7);
      }
LAB_1008e75eb:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_34 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        if (*(long *)(local_128 + 0x10) != 0) {
          FUN_1004a11c0();
          QMapDataBase::freeTree(local_128,(int)*(undefined8 *)(local_128 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)local_128);
      }
      goto LAB_1008e6a86;
    }
    iVar4 = QVariant::type();
    if ((iVar4 == 10) || (iVar4 = QVariant::type(), iVar4 == 0xc)) {
      QVariant::toString();
      FUN_1008e8810(&local_178,&local_180);
      QString::toUtf8();
      QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_170);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_34 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6c7a;
        }
        QArrayData::deallocate(local_170,1,8);
      }
LAB_1008e6c7a:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_34 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6cb0;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1008e6cb0:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_34 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        QArrayData::deallocate(local_180,2,8);
      }
      goto LAB_1008e6a86;
    }
    iVar4 = QVariant::type();
    if (iVar4 == 6) {
      dVar18 = (double)QVariant::toDouble(param_2);
      QByteArray::number(dVar18,(char)&local_188,0x67);
      QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_188);
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_34 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e76bd;
        }
        QArrayData::deallocate(local_188,1,8);
      }
LAB_1008e76bd:
      iVar4 = QByteArray::indexOf((char *)&local_88,0xa06364);
      if ((iVar4 == -1) && (iVar4 = QByteArray::indexOf((char *)&local_88,0xa51f2a), iVar4 == -1)) {
        QByteArray::append((char *)&local_88);
      }
      goto LAB_1008e6a86;
    }
    iVar4 = QVariant::type();
    if (iVar4 == 1) {
      cVar3 = QVariant::toBool();
      pcVar15 = "false";
      if (cVar3 != '\0') {
        pcVar15 = "true";
      }
      QByteArray::operator=((QByteArray *)&local_88,pcVar15);
      goto LAB_1008e6a86;
    }
    iVar4 = QVariant::type();
    iVar16 = (int)param_2;
    if (iVar4 == 5) {
      iVar4 = QVariant::userType();
      if (iVar4 == 5) {
        puVar5 = (undefined8 *)QVariant::constData();
        iVar4 = (int)*puVar5;
      }
      else {
        cVar3 = QVariant::convert(iVar16,(void *)0x5);
        iVar4 = 0;
        if (cVar3 != '\0') {
          iVar4 = local_50;
        }
      }
      QByteArray::number((ulonglong)&local_190,iVar4);
      QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_190);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_34 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        QArrayData::deallocate(local_190,1,8);
      }
      goto LAB_1008e6a86;
    }
    cVar3 = QVariant::canConvert(iVar16);
    if (cVar3 != '\0') {
      iVar4 = QVariant::userType();
      if (iVar4 == 4) {
        puVar5 = (undefined8 *)QVariant::constData();
        iVar4 = (int)*puVar5;
      }
      else {
        cVar3 = QVariant::convert(iVar16,(void *)0x4);
        iVar4 = 0;
        if (cVar3 != '\0') {
          iVar4 = local_48;
        }
      }
      QByteArray::number((longlong)&local_198,iVar4);
      QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_198);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_34 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        QArrayData::deallocate(local_198,1,8);
      }
      goto LAB_1008e6a86;
    }
    cVar3 = QVariant::canConvert(iVar16);
    if (cVar3 != '\0') {
      iVar4 = QVariant::userType();
      if (iVar4 == 0x20) {
        puVar5 = (undefined8 *)QVariant::constData();
        iVar4 = (int)*puVar5;
      }
      else {
        cVar3 = QVariant::convert(iVar16,&DAT_00000020);
        iVar4 = 0;
        if (cVar3 != '\0') {
          iVar4 = local_40;
        }
      }
      QString::number((long)&local_1a8,iVar4);
      QString::toUtf8();
      QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_1a0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_34 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e7a5b;
        }
        QArrayData::deallocate(local_1a0,1,8);
      }
LAB_1008e7a5b:
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_34 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
      goto LAB_1008e6a86;
    }
    cVar3 = QVariant::canConvert(iVar16);
    if (cVar3 != '\0') {
      QVariant::toString();
      FUN_1008e8810(&local_1b8,&local_1c0);
      QString::toUtf8();
      QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_1b0);
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_34 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e795e;
        }
        QArrayData::deallocate(local_1b0,1,8);
      }
LAB_1008e795e:
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_34 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e7994;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
LAB_1008e7994:
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_34 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_1008e6a86;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
      goto LAB_1008e6a86;
    }
    *param_3 = '\0';
  }
  *param_1 = PTR_shared_null_100ba20d0;
LAB_1008e7abc:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return param_1;
      }
      local_34 = 0;
    }
    QArrayData::deallocate(local_88,1,8);
  }
  return param_1;
}

