
void FUN_1003fc340(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_34;
  
  QTime::start();
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),param_1 + 0x10,1,0,0,0);
    cVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x98))();
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x60))(*(long **)(param_1 + 0x18),0,0);
      (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                (*(long **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38),
                 *(int *)(param_1 + 0x68) << 4,&local_34);
      (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
      if (local_34 == 0) {
        FUN_1008e3970("[RH]","HddUtils",0,"can\'t read drh file or it\'s empty");
      }
      else {
        *(ulong *)(param_1 + 0x50) = (ulong)(local_34 >> 4);
        uVar5 = 0;
        FUN_1008e3970("[RH]","HddUtils",0,"hdd: rh for %lld reqs ...");
        uVar6 = *(ulong *)(param_1 + 0x50);
        if (uVar6 != 0) {
          uVar8 = 0;
          uVar7 = 1;
          uVar5 = 0;
          do {
            uVar9 = *(ulong *)(*(long *)(param_1 + 0x38) + 8 + uVar8 * 0x10);
            if (uVar9 <= *(ulong *)(param_1 + 0x60)) {
              lVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2e0))();
              iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0xd0))();
              if ((iVar2 != 1) || (*(char *)(param_1 + 0x28) != '\0')) break;
              uVar9 = lVar4 * uVar9;
              (**(code **)(**(long **)(param_1 + 0x20) + 0x120))
                        (*(long **)(param_1 + 0x20),uVar9 & 0xffffffff,
                         *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 0x10));
              if ((ulong)*(uint *)(param_1 + 0x78) != 0) {
                iVar2 = (int)((uVar9 >> 10) / (ulong)*(uint *)(param_1 + 0x78));
                if (iVar2 == 0) {
                  iVar2 = 1;
                }
                FUN_1007685b0(iVar2);
              }
              uVar5 = uVar5 + uVar9;
              uVar6 = *(ulong *)(param_1 + 0x50);
            }
            uVar8 = (ulong)uVar7;
            uVar7 = uVar7 + 1;
          } while (uVar8 < uVar6);
        }
        uVar3 = QTime::elapsed();
        FUN_1008e3970("[RH]","HddUtils",0,"hdd: rh done in %d msec, %lld MB",uVar3,uVar5 >> 0x14);
      }
    }
  }
  return;
}

