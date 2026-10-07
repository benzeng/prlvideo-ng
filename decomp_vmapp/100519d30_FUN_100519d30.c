
void FUN_100519d30(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  uint *puVar7;
  uint local_64;
  long *local_60;
  undefined1 local_58 [4];
  undefined4 local_54;
  long *local_50;
  undefined1 local_48 [4];
  uint local_44;
  long *local_40;
  undefined1 local_34 [4];
  
  lVar4 = *(long *)(*param_3 + 0x10);
  uVar1 = *(uint *)(lVar4 + 0x4c);
  if (uVar1 != 0) {
    local_40 = (long *)0x0;
    if (*param_3 == 0) {
      lVar4 = 0;
    }
    FUN_100790630(lVar4,0,local_34,&local_40,&local_44);
    if (0xb < local_44) {
      piVar6 = (int *)0x0;
      if (local_40 != (long *)0x0) {
        piVar6 = (int *)local_40[2];
      }
      iVar2 = *piVar6;
      if (iVar2 - 1U < 2) {
        if ((*(byte *)(piVar6 + 1) & 1) == 0) {
          if (1 < uVar1) {
            local_60 = (long *)0x0;
            uVar5 = 0;
            if (*param_3 != 0) {
              uVar5 = *(undefined8 *)(*param_3 + 0x10);
            }
            FUN_100790630(uVar5,1,local_58,&local_60,&local_64);
            puVar7 = (uint *)0x0;
            if (local_60 != (long *)0x0) {
              puVar7 = (uint *)local_60[2];
            }
            if (((ulong)(*puVar7 - 1) * 4 + 8 <= (ulong)local_64) && (*puVar7 != 0)) {
              lVar4 = 0;
              do {
                if (iVar2 == 1) {
                  FUN_10051a150(param_1,param_2);
                }
                else {
                  FUN_10051a3c0(param_1,param_2,puVar7[lVar4 + 1]);
                }
                lVar4 = lVar4 + 1;
              } while ((uint)lVar4 < *puVar7);
            }
            if (local_60 != (long *)0x0) {
              LOCK();
              plVar3 = local_60 + 1;
              lVar4 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)(*local_60 + 0x10))();
              }
            }
          }
        }
        else if (0xf < local_44) {
          if (iVar2 == 1) {
            FUN_10051a150(param_1,param_2);
          }
          else {
            FUN_10051a3c0(param_1,param_2,piVar6[3]);
          }
        }
      }
      else if (((iVar2 == 3) && (1 < uVar1)) && (0xf < local_44)) {
        plVar3 = (long *)FUN_10051a030(param_1,piVar6[3]);
        if (plVar3 == (long *)0x0) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("","VmClientTGHost",1,"Tool %u is sending data while not being connected",
                          piVar6[3]);
          }
        }
        else {
          local_50 = (long *)0x0;
          uVar5 = 0;
          if (*param_3 != 0) {
            uVar5 = *(undefined8 *)(*param_3 + 0x10);
          }
          FUN_100790630(uVar5,1,local_48,&local_50,&local_54);
          (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_50,local_54);
          FUN_1005197a0(plVar3);
          if (local_50 != (long *)0x0) {
            LOCK();
            plVar3 = local_50 + 1;
            lVar4 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)(*local_50 + 0x10))();
            }
          }
        }
      }
    }
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
  }
  return;
}

