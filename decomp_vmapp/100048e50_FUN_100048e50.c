
void FUN_100048e50(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  QArrayData *pQVar12;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QDataStream local_90 [32];
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  int local_44;
  long local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x120) != 0) {
    local_44 = *(int *)(param_1 + 0x120);
    QMutex::unlock();
    iVar7 = local_44;
    goto LAB_100048fc1;
  }
  QMutex::unlock();
  if (*(ushort *)(param_2 + 0x14) < 0x10) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("GSHEXT","vm",1,
                    "Invalid GSHEXT request from guest: pr=%p, request=0x%x, inlineBytes=%u (must be >= %u)"
                    ,param_2,*(undefined4 *)(param_2 + 8),*(ushort *)(param_2 + 0x14),0x10);
    }
    local_44 = -0xffffffe;
    iVar7 = local_44;
    goto LAB_100048fc1;
  }
  piVar8 = (int *)FUN_1002a6010(param_2);
  puVar2 = PTR_shared_null_100ba20d0;
  if (piVar8 == (int *)0x0) {
    FUN_1008e3970("GSHEXT","vm",0,
                  "Error: failed to get inline bytes for pr=%p, request=0x%x, inlineBytes=%u",
                  param_2,*(undefined4 *)(param_2 + 8),*(undefined2 *)(param_2 + 0x14));
    local_44 = -0xfffffe4;
    iVar7 = local_44;
    goto LAB_100048fc1;
  }
  if (*piVar8 != 1) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("GSHEXT","vm",1,
                    "Invalid GSHEXT request from guest: pr=%p, request=0x%x, ver={%u, %u} (must be {%u, %u})"
                    ,param_2,*(undefined4 *)(param_2 + 8),*piVar8,piVar8[1],1,0);
    }
    local_44 = -0xffffffe;
    iVar7 = local_44;
    goto LAB_100048fc1;
  }
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0x8320:
    if (piVar8[2] == 1) {
      if (*(ushort *)(param_2 + 0x14) < 0xf8) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("GSHEXT","vm",1,
                        "Invalid size of inline data for VIRTEX_REQ_FSTAT request: %u (must be >= %u)"
                        ,*(ushort *)(param_2 + 0x14),0xf8);
        }
        local_44 = -0xffffffe;
        iVar7 = local_44;
      }
      else {
        FUN_100049c50();
        iVar7 = local_44;
      }
    }
    else {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,"Invalid request for VIRTEX_REQ_FSTAT: %u (must be %u)",
                      piVar8[2],1);
      }
      local_44 = -0xffffffe;
      iVar7 = local_44;
    }
    break;
  case 0x8321:
    if (piVar8[2] != 2) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,"Invalid request for VIRTEX_REQ_FCTL: %u (must be %u)",
                      piVar8[2],2);
      }
      local_44 = -0xffffffe;
      iVar7 = local_44;
      break;
    }
    local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
    if (*(ushort *)(param_2 + 0x14) < 0x50) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,
                      "Invalid size of inline data for VIRTEX_REQ_FCTL request: %u (must be >= %u)",
                      *(ushort *)(param_2 + 0x14),0x50);
      }
      local_44 = -0xffffffe;
    }
    else if (*(short *)(param_2 + 0x16) == 0) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,
                      "Invalid buffers count for VIRTEX_REQ_FCTL request: %u (must be >= 1)",0);
      }
      local_44 = -0xffffffe;
    }
    else {
      lVar10 = FUN_1002a6120(param_2,0,0);
      if (lVar10 == 0) {
        FUN_1008e3970("GSHEXT","vm",0,"Failed to get paged buffer (0, 0): pr=%p, pr->Request()=0x%x"
                      ,param_2,*(undefined4 *)(param_2 + 8));
        local_44 = -0xfffffe4;
      }
      else {
        QByteArray::resize((int)&local_50);
        if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
        }
        FUN_1002a5990(lVar10,0,local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(lVar10 + 8));
        if (piVar8[4] != 3) {
          pQVar12 = local_50 + *(long *)(local_50 + 0x10);
          if (pQVar12 != (QArrayData *)0x0) {
            _strlen((char *)pQVar12);
          }
          QString::fromUtf8_helper((char *)&local_68,(int)pQVar12);
          QString::operator=(&local_58,&local_68);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10004962e;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_10004962e:
          cVar5 = FUN_100048510(&local_58,&local_60,1,0);
          if (cVar5 == '\0') {
            if (0 < DAT_1011b55f8) {
              QString::toUtf8();
              FUN_1008e3970("GSHEXT","vm",1,"Failed to get host path for \"%s\"",
                            local_70 + *(long *)(local_70 + 0x10));
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100049956;
                }
                QArrayData::deallocate(local_70,1,8);
              }
            }
LAB_100049956:
            local_44 = -0xfffffec;
            goto LAB_10004995d;
          }
        }
        plVar11 = operator_new(8);
        *plVar11 = (long)puVar2;
        QDataStream::QDataStream(local_90,plVar11,2);
        QDataStream::writeRawData((char *)local_90,(int)piVar8);
        if (piVar8[4] == 3) {
          operator<<(local_90,(QByteArray *)&local_50);
        }
        else {
          QString::toUtf8();
          operator<<(local_90,(QByteArray *)&local_98);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100049834;
            }
            QArrayData::deallocate(local_98,1,8);
          }
        }
LAB_100049834:
        QDataStream::~QDataStream(local_90);
        local_a0 = (QArrayData *)puVar2;
        lVar10 = *plVar11;
        iVar7 = FUN_100519800(param_1 + 0x28,&local_a0,*(long *)(lVar10 + 0x10) + lVar10,
                              *(undefined4 *)(lVar10 + 4),FUN_1000484a0,plVar11);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000498a8;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1000498a8:
        if ((iVar7 == 0) && (0 < DAT_1011b55f8)) {
          FUN_1008e3970("GSHEXT","vm",1,"Failed to send FCTL request to clients");
        }
        local_44 = 0;
      }
    }
LAB_10004995d:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004998d;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10004998d:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000499bd;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1000499bd:
    iVar7 = local_44;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_50,1,8);
      iVar7 = local_44;
    }
    break;
  case 0x8322:
    if (piVar8[2] == 3) {
      if (*(ushort *)(param_2 + 0x14) < 0x110) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("GSHEXT","vm",1,
                        "Invalid size of inline data for VIRTEX_REQ_UITHEME request: %u (must be >= %u)"
                        ,*(ushort *)(param_2 + 0x14),0x110);
        }
        local_44 = -0xffffffe;
        iVar7 = local_44;
      }
      else {
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmTools();
        CVmTools::getNativeLook();
        bVar4 = CVmNativeLook::isEnabled();
        piVar8[4] = (uint)bVar4;
        piVar8[5] = 0;
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmRuntimeOptions();
        cVar5 = CVmRunTimeOptions::isDisableWin7Logo();
        if (cVar5 != '\0') {
          piVar8[5] = 1;
        }
        local_44 = 0;
        iVar7 = local_44;
      }
    }
    else {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,"Invalid request for VIRTEX_REQ_UITHEME: %u (must be %u)",
                      piVar8[2],3);
      }
      local_44 = -0xffffffe;
      iVar7 = local_44;
    }
    break;
  case 0x8323:
    if (piVar8[2] == 4) {
      if (*(ushort *)(param_2 + 0x14) < 0x200) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("GSHEXT","vm",1,
                        "Invalid size of inline data for VIRTEX_REQ_CRASH request: %u (must be >= %u)"
                        ,*(ushort *)(param_2 + 0x14),0x200);
        }
        local_44 = -0xffffffe;
        iVar7 = local_44;
      }
      else {
        FUN_10004ab80(param_1,param_2,piVar8,&local_44);
        iVar7 = local_44;
      }
    }
    else {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,"Invalid request for VIRTEX_REQ_CRASH: %u (must be %u)",
                      piVar8[2],4);
      }
      local_44 = -0xffffffe;
      iVar7 = local_44;
    }
    break;
  case 0x8324:
    local_44 = -0xfffffff;
    iVar7 = local_44;
    if (((0x27 < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) != 0)) &&
       (lVar10 = FUN_1002a6120(param_2,0,1), iVar7 = local_44, lVar10 != 0)) {
      local_a8 = (QArrayData *)PTR_shared_null_100ba20d0;
      lVar9 = FUN_1002a6010(param_2);
      uVar6 = FUN_10004bc80(param_1,&local_a8);
      *(undefined4 *)(lVar9 + 0x10) = uVar6;
      *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)(local_a8 + 4);
      iVar7 = -0xffffff7;
      if (*(uint *)(local_a8 + 4) <= *(uint *)(lVar10 + 8)) {
        iVar7 = 0;
        FUN_1002a5a50(lVar10,0,local_a8 + *(long *)(local_a8 + 0x10));
        *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(local_a8 + 4);
      }
      local_44 = iVar7;
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_a8,1,8);
        iVar7 = local_44;
      }
    }
    break;
  case 0x8325:
    local_44 = -0xfffffff;
    iVar7 = local_44;
    if ((((0x27 < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) != 0)) &&
        (lVar10 = FUN_1002a6120(param_2,0,1), iVar7 = local_44, lVar10 != 0)) &&
       (3 < *(uint *)(lVar10 + 8))) {
      local_44 = 0;
      lVar10 = FUN_1002a6010(param_2);
      iVar7 = *(int *)(lVar10 + 0x10);
      local_40 = param_2;
      QMutex::lock();
      iVar1 = *(int *)(param_1 + 0x130);
      if (iVar1 == iVar7) {
        FUN_100036f00(param_1 + 0x140,&local_40);
        QMutex::unlock();
        return;
      }
      QMutex::unlock();
      lVar10 = FUN_1002a6120(param_2,0,1);
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      FUN_1002a5a50(lVar10,0,&local_40,4);
      *(undefined4 *)(lVar10 + 0x10) = 4;
      iVar7 = 0;
    }
    break;
  case 0x8326:
    local_44 = -0xfffffff;
    iVar7 = local_44;
    if (0x27 < *(ushort *)(param_2 + 0x14)) {
      lVar10 = FUN_1002a6010(param_2);
      uVar3 = DAT_1011c3698;
      local_44 = -0xffffffd;
      iVar7 = local_44;
      if (*(int *)(lVar10 + 0x10) == 0) {
        FUN_1000919d0(DAT_1011c3698,0x71,0x80);
        FUN_1000919d0(uVar3,0x6d,0x80);
        FUN_1000919d0(uVar3,0x3e,0x80);
        FUN_1000919d0(uVar3,0x74,0x80);
        FUN_1000919d0(uVar3,0x32,0x80);
        FUN_1000919d0(uVar3,0x25,0);
        FUN_1000919d0(uVar3,0x40,0);
        FUN_1000919d0(uVar3,0x73,0);
        FUN_1000919d0(uVar3,0x38,0);
        FUN_1000919d0(uVar3,0x38,0x80);
        FUN_1000919d0(uVar3,0x73,0x80);
        FUN_1000919d0(uVar3,0x40,0x80);
        FUN_1000919d0(uVar3,0x25,0x80);
        local_44 = 0;
        iVar7 = local_44;
      }
    }
    break;
  case 0x8327:
    local_44 = FUN_10004aa80(param_1,param_2);
    iVar7 = local_44;
    break;
  default:
    local_44 = -0xfffffdf;
    iVar7 = local_44;
  }
LAB_100048fc1:
  FUN_1004c07d0(param_1,param_2,iVar7);
  return;
}

