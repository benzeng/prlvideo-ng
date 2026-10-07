
undefined8 FUN_10068cfb0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  QArrayData *local_48;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_3c = 0;
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si","DiskImageComp.cpp",
                  0xd81,"ConvertFormat");
  }
  cVar5 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (cVar5 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Disk \"%s\" is not opened, convert is failed. [%p]",
                  local_48 + *(long *)(local_48 + 0x10),
                  *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
    if (*(int *)local_48 == -1) {
      return 0x80021021;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0x80021021;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return 0x80021021;
  }
  if ((*(byte *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) & 3) == 0) {
    (**(code **)(*param_1 + 0xf0))(param_1);
    return 0x80000003;
  }
  if (*(int *)(lVar2 + 0x5c) == 2) {
    puVar14 = (undefined8 *)(lVar2 + 0x4c);
    iVar6 = _memcmp(puVar14,"WithouFreSpacExt",0x10);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = _memcmp(puVar14,"WithoutFreeSpace",0x10);
    if (iVar6 == 0) {
      if (*(uint *)(lVar2 + 0x7c) == 0) {
        pcVar12 = "Old disk format (not alligned to block size) is not supported";
      }
      else {
        if (*(uint *)(lVar2 + 0x7c) % *(uint *)(lVar2 + 0x10) == 0) {
          pvVar9 = _valloc(0x100000);
          if (pvVar9 == (void *)0x0) {
            FUN_1008e3970("","dimg",0,"Memory allocation failed for BAT reading.");
            (**(code **)(*param_1 + 0xf0))(param_1);
            return 0x80000002;
          }
          *(undefined8 *)(lVar2 + 0x54) = 0x7478456361705365;
          *puVar14 = 0x7246756f68746957;
          *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x10);
          iVar6 = 0;
          if (*(int *)(lVar2 + 0x6c) != 0) {
            uVar15 = 0;
            lVar17 = 0;
            iVar6 = 0;
            do {
              plVar3 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
              cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,pvVar9,0x100000,&local_38,lVar17);
              if ((cVar5 == '\0') &&
                 (lVar10 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) +
                                       0x160))((long)param_1 + *(long *)(*param_1 + -0x18)),
                 lVar10 != (ulong)local_38 + lVar17)) {
                FUN_1008e3970("","dimg",0,"Error: Failed to read BAT at offset %llu and size %d",
                              lVar17,0x100000);
                uVar13 = 0x80021029;
LAB_10068d4b4:
                _free(pvVar9);
                (**(code **)(*param_1 + 0xf0))(param_1);
                return uVar13;
              }
              uVar16 = (int)uVar15 * 4 + 0x40U & 0xffffc;
              do {
                if (*(uint *)(lVar2 + 0x6c) <= uVar15) break;
                uVar11 = (ulong)(uVar16 >> 2);
                uVar8 = *(uint *)((long)pvVar9 + uVar11 * 4);
                if (uVar8 % *(uint *)(lVar2 + 0x10) != 0) {
                  FUN_1008e3970("","dimg",0,
                                "Error: BAT entry is not aligned on block size: %u. This is fatal, but we will continue."
                                ,uVar8);
                  iVar6 = iVar6 + 1;
                  uVar8 = *(uint *)((long)pvVar9 + uVar11 * 4);
                }
                *(uint *)((long)pvVar9 + uVar11 * 4) = uVar8 / *(uint *)(lVar2 + 0xc);
                uVar11 = (uVar15 * 1000) / (ulong)*(uint *)(lVar2 + 0x6c);
                puVar14 = param_2;
                while( true ) {
                  pcVar4 = (code *)*puVar14;
                  if ((pcVar4 == (code *)0x0) && (puVar14[4] == 0)) goto LAB_10068d353;
                  iVar7 = (int)uVar11;
                  if ((-1 < iVar7) && (1 < *(uint *)(puVar14 + 2))) {
                    iVar1 = *(int *)((long)puVar14 + 0x14);
                    if (iVar7 < *(int *)((long)puVar14 + 0x14)) {
                      *(int *)((long)puVar14 + 0x14) = iVar7;
                      goto LAB_10068d353;
                    }
                    *(int *)((long)puVar14 + 0x14) = iVar7;
                    uVar8 = (uint)(iVar7 - iVar1) / *(uint *)(puVar14 + 2) + *(int *)(puVar14 + 3);
                    uVar11 = (ulong)uVar8;
                    *(uint *)(puVar14 + 3) = uVar8;
                  }
                  if (pcVar4 != (code *)0x0) break;
                  puVar14 = (undefined8 *)puVar14[4];
                }
                (*pcVar4)(uVar11 & 0xffffffff,puVar14[1]);
LAB_10068d353:
                uVar16 = uVar16 + 4;
                uVar15 = uVar15 + 1;
              } while (uVar16 < 0x100000);
              plVar3 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
              cVar5 = (**(code **)(*plVar3 + 0x48))(plVar3,pvVar9,local_38,&local_3c,lVar17);
              if (cVar5 == '\0') {
                FUN_1008e3970("","dimg",0,"Error: Failed to write BAT at offset %llu and size %d",
                              lVar17,0x100000);
                uVar13 = 0x80021027;
                goto LAB_10068d4b4;
              }
              lVar17 = lVar17 + 0x100000;
            } while (uVar15 < *(uint *)(lVar2 + 0x6c));
          }
          FUN_1008e3970("","dimg",0,"Converting finished");
          FUN_1008e3970("","dimg",0,"\tErrors:\t\t%u",iVar6);
          FUN_1008e3970("","dimg",0,"\tBlocks:\t\t%u",*(undefined4 *)(lVar2 + 0x6c));
          _free(pvVar9);
          return 0;
        }
        pcVar12 = "Disk is not alligned to block size";
      }
      goto LAB_10068d0af;
    }
  }
  pcVar12 = "Supported only Expanding disks";
LAB_10068d0af:
  FUN_1008e3970("","dimg",0,pcVar12);
  (**(code **)(*param_1 + 0xf0))(param_1);
  return 0x80021033;
}

