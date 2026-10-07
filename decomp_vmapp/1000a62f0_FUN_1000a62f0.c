
void FUN_1000a62f0(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  iVar1 = *param_2;
  if (iVar1 < 0x236) {
    if (iVar1 < 0x8e) {
      if (iVar1 == 0x84) {
        FUN_10008bf90(*(undefined8 *)(param_1 + 0x1940),*(undefined8 *)(param_2 + 0xc));
      }
    }
    else if (iVar1 < 0x202) {
      if (iVar1 == 0x8e) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x1940) + 0x60);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined8 *)(param_2 + 0xc));
        }
      }
      else if (iVar1 == 0xab) {
        FUN_10008c0d0(*(undefined8 *)(param_1 + 0x1940),*(undefined8 *)(param_2 + 0xc));
      }
    }
    else if (iVar1 == 0x202) {
      lVar4 = *(long *)(param_2 + 0xc);
      *(long *)(param_1 + 0x1a10) = lVar4;
      *(undefined8 *)(lVar4 + 0x728) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 0x20);
      *(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x730) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 0x28);
    }
    else if (iVar1 == 0x208) {
      puVar5 = *(undefined4 **)(param_2 + 0xc);
      *(undefined4 **)(param_1 + 0x1918) = puVar5;
      *puVar5 = 0;
      *(int *)(param_1 + 0x1920) = param_2[4] + -8;
    }
  }
  else if (iVar1 < 0x23a) {
    if (iVar1 == 0x236) {
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      iVar1 = param_2[4];
      pvVar7 = operator_new(0x48);
      FUN_100762470(pvVar7);
      *(void **)(param_1 + 0x1910) = pvVar7;
      FUN_100762530(pvVar7,uVar2,iVar1);
      FUN_100762800(*(undefined8 *)(param_1 + 0x1910),*(undefined8 *)(param_1 + 0xb78));
      DAT_1011ccc18 = FUN_1000b2c10;
      if (DAT_1011c3800 != 0) {
        FUN_100272670(DAT_1011c3800,uVar2);
      }
    }
  }
  else if (iVar1 < 0x249) {
    if (iVar1 == 0x23a) {
      *(undefined8 *)(param_1 + 0x1148) = *(undefined8 *)(param_2 + 0xc);
    }
    else if (iVar1 == 0x248) {
      lVar4 = *(long *)(param_1 + 0x1a38);
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      QMutex::lock();
      *(undefined8 *)(lVar4 + 0x11850) = uVar2;
      QMutex::unlock();
    }
  }
  else if (iVar1 == 0x249) {
    *(undefined8 *)(param_1 + 0x1928) = *(undefined8 *)(param_2 + 0xc);
  }
  else if (iVar1 == 0x24a) {
    *(undefined8 *)(param_1 + 0x1930) = *(undefined8 *)(param_2 + 0xc);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1a50);
  if (((puVar6 != (undefined8 *)0x0) && (*(long *)(param_2 + 0xc) != 0)) &&
     (*(long *)(param_2 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001000a654e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar6)
              (puVar6,*param_2,*(undefined2 *)((long)param_2 + 6),*(long *)(param_2 + 0xc),
               *(long *)(param_2 + 8),param_2[4]);
    return;
  }
  return;
}

