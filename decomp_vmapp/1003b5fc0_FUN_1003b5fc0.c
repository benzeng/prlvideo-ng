
undefined8 FUN_1003b5fc0(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long local_38;
  
  bVar3 = *(byte *)(param_2 + 0x38);
  local_38 = param_2;
  if (10 < bVar3) {
    if (bVar3 < 0x23) {
      if (bVar3 < 0xf) {
        if (bVar3 == 0xb) {
          lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
          uVar6 = *(undefined8 *)(lVar4 + 0x1c0);
        }
        else {
          if (bVar3 != 0xc) {
            return 0;
          }
          lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
          uVar6 = *(undefined8 *)(lVar4 + 0x1c8);
        }
      }
      else {
        if (bVar3 != 0xf) {
          if (bVar3 != 0x19) {
            return 0;
          }
          lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
          if (lVar4 == 0) {
            lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
            if (lVar4 == 0) {
              return 0;
            }
            uVar7 = *(int *)(param_2 + 0x2c) << 2;
            bVar3 = *(byte *)(param_2 + 0x30);
            if ((bVar3 & 1) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)(*(long *)(lVar4 + 0x1d0) + (ulong)uVar7 * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 2) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)(*(long *)(lVar4 + 0x1d0) + (ulong)(uVar7 | 1) * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 4) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)(*(long *)(lVar4 + 0x1d0) + (ulong)(uVar7 | 2) * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 8) == 0) {
              return 0;
            }
            uVar8 = (ulong)(uVar7 | 3);
            lVar4 = *(long *)(lVar4 + 0x1d0);
          }
          else {
            uVar7 = *(int *)(param_2 + 0x2c) << 2;
            bVar3 = *(byte *)(param_2 + 0x30);
            if ((bVar3 & 1) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)(*(long *)(lVar4 + 0x1d8) + (ulong)uVar7 * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 2) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)(*(long *)(lVar4 + 0x1d8) + (ulong)(uVar7 | 1) * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 4) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)(*(long *)(lVar4 + 0x1d8) + (ulong)(uVar7 | 2) * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 8) == 0) {
              return 0;
            }
            uVar8 = (ulong)(uVar7 | 3);
            lVar4 = *(long *)(lVar4 + 0x1d8);
          }
          goto LAB_1003b6269;
        }
        lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        uVar6 = *(undefined8 *)(lVar4 + 0x1d0);
      }
    }
    else {
      if (bVar3 != 0x23) {
        return 0;
      }
      lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
      uVar6 = *(undefined8 *)(lVar4 + 0x1e0);
    }
    goto LAB_1003b626d;
  }
  switch(bVar3) {
  case 1:
    lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    if ((lVar4 == 0) && ((*(byte *)(param_2 + 0x35) & 2) != 0)) {
      for (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x28);
          puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
        if ((*(char *)((long)puVar11 + 0x11) == *(char *)(param_2 + 0x38)) &&
           (*(int *)((long)puVar11 + 0xc) != 0)) {
          uVar7 = 0;
          do {
            uVar10 = (*(int *)(puVar11 + 1) + uVar7) * 4;
            bVar3 = *(byte *)(param_2 + 0x30);
            if ((bVar3 & 1) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)uVar10 * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 2) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)(uVar10 | 1) * 8)
                           );
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 4) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)(uVar10 | 2) * 8)
                           );
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 8) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)(uVar10 | 3) * 8)
                           );
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)((long)puVar11 + 0xc));
        }
      }
      return 0;
    }
    uVar7 = *(int *)(param_2 + 0x2c) << 2;
    bVar3 = *(byte *)(param_2 + 0x30);
    if ((bVar3 & 1) != 0) {
      FUN_1003c5120(param_1,param_2,
                    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)uVar7 * 8))
      ;
      bVar3 = *(byte *)(param_2 + 0x30);
    }
    if ((bVar3 & 2) != 0) {
      FUN_1003c5120(param_1,param_2,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)(uVar7 | 1) * 8));
      bVar3 = *(byte *)(param_2 + 0x30);
    }
    if ((bVar3 & 4) != 0) {
      FUN_1003c5120(param_1,param_2,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (ulong)(uVar7 | 2) * 8));
      bVar3 = *(byte *)(param_2 + 0x30);
    }
    if ((bVar3 & 8) == 0) {
      return 0;
    }
    uVar8 = (ulong)(uVar7 | 3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
    goto LAB_1003b6269;
  case 2:
    lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    if ((lVar4 == 0) && ((*(byte *)(param_2 + 0x35) & 2) != 0)) {
      for (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x18) + 0x28);
          puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
        if ((*(char *)((long)puVar11 + 0x11) == *(char *)(param_2 + 0x38)) &&
           (*(int *)((long)puVar11 + 0xc) != 0)) {
          uVar7 = 0;
          do {
            uVar10 = (*(int *)(puVar11 + 1) + uVar7) * 4;
            bVar3 = *(byte *)(param_2 + 0x30);
            if ((bVar3 & 1) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)uVar10 * 8));
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 2) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)(uVar10 | 1) * 8)
                           );
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 4) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)(uVar10 | 2) * 8)
                           );
              bVar3 = *(byte *)(param_2 + 0x30);
            }
            if ((bVar3 & 8) != 0) {
              FUN_1003c5120(param_1,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)(uVar10 | 3) * 8)
                           );
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)((long)puVar11 + 0xc));
        }
      }
      return 0;
    }
    uVar7 = *(int *)(param_2 + 0x2c) << 2;
    bVar3 = *(byte *)(param_2 + 0x30);
    if ((bVar3 & 1) != 0) {
      FUN_1003c5120(param_1,param_2,
                    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)uVar7 * 8))
      ;
      bVar3 = *(byte *)(param_2 + 0x30);
    }
    if ((bVar3 & 2) != 0) {
      FUN_1003c5120(param_1,param_2,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)(uVar7 | 1) * 8));
      bVar3 = *(byte *)(param_2 + 0x30);
    }
    if ((bVar3 & 4) != 0) {
      FUN_1003c5120(param_1,param_2,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) + 0x58) + (ulong)(uVar7 | 2) * 8));
      bVar3 = *(byte *)(param_2 + 0x30);
    }
    if ((bVar3 & 8) == 0) {
      return 0;
    }
    uVar8 = (ulong)(uVar7 | 3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x58);
LAB_1003b6269:
    uVar6 = *(undefined8 *)(lVar4 + uVar8 * 8);
LAB_1003b626d:
    FUN_1003c5120(param_1,param_2,uVar6);
    break;
  case 3:
    iVar2 = *(int *)(param_2 + 0x2c);
    plVar1 = (long *)(param_1 + 0x8030);
    if ((ulong)(*(long *)(param_1 + 0x8038) - *(long *)(param_1 + 0x8030) >> 3) <
        (ulong)(iVar2 * 4 + 4)) {
      FUN_1003c63e0(plVar1);
    }
    uVar7 = iVar2 << 2;
    bVar3 = *(byte *)(param_2 + 0x30);
    if ((bVar3 & 1) != 0) {
      if (*(long *)(*plVar1 + (ulong)uVar7 * 8) == 0) {
        *(long *)(*plVar1 + (ulong)uVar7 * 8) = param_2;
      }
      else {
        FUN_1003c4bd0(param_1,param_2);
        bVar3 = *(byte *)(param_2 + 0x30);
      }
    }
    if ((bVar3 & 2) != 0) {
      if (*(long *)(*plVar1 + (ulong)(uVar7 | 1) * 8) == 0) {
        *(long *)(*plVar1 + (ulong)(uVar7 | 1) * 8) = param_2;
      }
      else {
        FUN_1003c4bd0(param_1,param_2);
        bVar3 = *(byte *)(param_2 + 0x30);
      }
    }
    if ((bVar3 & 4) != 0) {
      if (*(long *)(*plVar1 + (ulong)(uVar7 | 2) * 8) == 0) {
        *(long *)(*plVar1 + (ulong)(uVar7 | 2) * 8) = param_2;
      }
      else {
        FUN_1003c4bd0(param_1,param_2);
        bVar3 = *(byte *)(param_2 + 0x30);
      }
    }
    if ((bVar3 & 8) != 0) {
      if (*(long *)(*plVar1 + (ulong)(uVar7 | 3) * 8) == 0) {
        *(long *)(*plVar1 + (ulong)(uVar7 | 3) * 8) = param_2;
      }
      else {
LAB_1003b6759:
        FUN_1003c4bd0(param_1,param_2);
      }
    }
    break;
  case 8:
    if ((*(byte *)(param_2 + 0x35) & 2) == 0) {
      uVar7 = *(uint *)(param_2 + 0x28);
      uVar10 = *(int *)(param_2 + 0x2c) << 0x1c | uVar7 * 4;
      if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
        for (puVar5 = *(uint **)(param_1 + 0x30 +
                                (ulong)((uVar7 >> 10 ^ uVar7 * 4) & 0xfff ^ uVar10 >> 0x18) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
          if (*puVar5 == uVar10) {
            if (*(long *)(puVar5 + 2) != 0) {
              FUN_1003c4bd0(param_1,param_2);
              goto LAB_1003b6419;
            }
            break;
          }
        }
        FUN_1003c5270(param_1 + 0x20,uVar10,&local_38);
      }
LAB_1003b6419:
      if ((*(byte *)(param_2 + 0x30) & 2) != 0) {
        uVar9 = uVar10 | 1;
        for (puVar5 = *(uint **)(param_1 + 0x30 +
                                (ulong)((uVar7 >> 10 ^ uVar9) & 0xfff ^ uVar10 >> 0x18) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
          if (*puVar5 == uVar9) {
            if (*(long *)(puVar5 + 2) != 0) {
              FUN_1003c4bd0(param_1,param_2);
              goto LAB_1003b6472;
            }
            break;
          }
        }
        FUN_1003c5270(param_1 + 0x20,uVar9,&local_38);
      }
LAB_1003b6472:
      if ((*(byte *)(param_2 + 0x30) & 4) != 0) {
        uVar9 = uVar10 | 2;
        for (puVar5 = *(uint **)(param_1 + 0x30 +
                                (ulong)((uVar7 >> 10 ^ uVar9) & 0xfff ^ uVar10 >> 0x18) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
          if (*puVar5 == uVar9) {
            if (*(long *)(puVar5 + 2) != 0) {
              FUN_1003c4bd0(param_1,param_2);
              goto LAB_1003b64cb;
            }
            break;
          }
        }
        FUN_1003c5270(param_1 + 0x20,uVar9,&local_38);
      }
LAB_1003b64cb:
      if ((*(byte *)(param_2 + 0x30) & 8) != 0) {
        uVar9 = uVar10 | 3;
        for (puVar5 = *(uint **)(param_1 + 0x30 +
                                (ulong)((uVar7 >> 10 ^ uVar9) & 0xfff ^ uVar10 >> 0x18) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
          if (*puVar5 == uVar9) {
            if (*(long *)(puVar5 + 2) != 0) goto LAB_1003b6759;
            break;
          }
        }
        FUN_1003c5270(param_1 + 0x20,uVar9,&local_38);
      }
    }
  }
  return 0;
}

