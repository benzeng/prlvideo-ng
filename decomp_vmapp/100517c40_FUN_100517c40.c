
void FUN_100517c40(long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if (7 < param_4) {
    piVar7 = (int *)0x0;
    if (*param_3 != 0) {
      piVar7 = *(int **)(*param_3 + 0x10);
    }
    if (((uint)piVar7[1] <= param_4) && ((*piVar7 == 1 || (*piVar7 == 4)))) {
      QMutex::lock();
      bVar9 = true;
      lVar6 = *(long *)(param_1 + 0x68);
      lVar3 = *(long *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = 0;
      if (lVar3 == 0) {
        lVar3 = *param_3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        plVar5 = *(long **)(lVar6 + 0x30);
        *(long *)(lVar6 + 0x30) = lVar3;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      else {
        lVar6 = FUN_1002a6120(lVar3,0,1);
        puVar2 = (uint *)(piVar7 + 1);
        if (*(uint *)(lVar6 + 8) < *puVar2) {
          FUN_1002a5a50(lVar6,0,puVar2,4);
          *(undefined4 *)(lVar6 + 0x10) = 4;
          lVar6 = *(long *)(param_1 + 0x68);
          lVar4 = *param_3;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar5 = *(long **)(lVar6 + 0x30);
          *(long *)(lVar6 + 0x30) = lVar4;
          uVar8 = 0xf0000009;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
        }
        else {
          uVar8 = 0;
          FUN_1002a5a50(lVar6,0,piVar7);
          *(uint *)(lVar6 + 0x10) = *puVar2;
          plVar5 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
          *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x30) = 0;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
        }
        bVar9 = false;
        QMutex::unlock();
        FUN_1004c07d0(param_1,lVar3,uVar8);
      }
      if (bVar9) {
        QMutex::unlock();
        return;
      }
    }
  }
  return;
}

