
int FUN_100694a70(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint in_EAX;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  (**(code **)(*param_1 + 0x178))();
  (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a8))
            ((long)param_1 + *(long *)(*param_1 + -0x18),param_2,param_3,0x51);
  iVar5 = (**(code **)(param_1[0x301f] + 0x10))(param_1 + 0x301f);
  if (iVar5 < 0) {
    FUN_1008e3970("","dimg",0,"Open: can\'t initialize base VHD");
  }
  else {
    plVar1 = param_1 + 0x30a0;
    ___bzero(plVar1,0x400);
    plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
    cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,plVar1,0x400,(long)&uStack_28 + 4,0x200);
    if (cVar4 == '\0') {
      FUN_1008e3970("","dimg",0,"Error reading Dynamic disk header");
      iVar5 = -0x7ffdefd7;
    }
    else if (*plVar1 == 0x6573726170737863) {
      (**(code **)(*param_1 + 0x1b0))(param_1);
      lVar3 = *param_1;
      uVar7 = (ulong)*(uint *)(param_1 + 0x30a4) /
              *(ulong *)(*(long *)(lVar3 + -0x18) + 0x38 + (long)param_1) + 7 >> 3;
      *(int *)(param_1 + 0x3121) = (int)uVar7;
      pvVar8 = _valloc(uVar7);
      param_1[0x3120] = (long)pvVar8;
      if (pvVar8 == (void *)0x0) {
        FUN_1008e3970("","dimg",0,"Bitmap memory allocation failed");
        iVar5 = -0x7ffffffe;
      }
      else {
        param_1[0x3122] = -1;
        iVar5 = *(int *)((long)param_1 + 0x1851c) * 4 + (int)param_1[0x30a2];
        *(int *)(param_1 + 0x3123) = iVar5;
        uVar6 = iVar5 + (int)*(undefined8 *)(*(long *)(lVar3 + -0x18) + 0x38 + (long)param_1);
        *(uint *)(param_1 + 0x3123) = uVar6;
        *(int *)(param_1 + 0x3123) =
             (int)((ulong)uVar6 / *(ulong *)(*(long *)(lVar3 + -0x18) + 0x38 + (long)param_1));
        iVar5 = (**(code **)(lVar3 + 0x50))(param_1);
        if (-1 < iVar5) {
          return 0;
        }
      }
    }
    else {
      FUN_1008e3970("","dimg",0,"Error, the cookie in dynamic disk header is not set");
      iVar5 = -0x7ffdefcd;
    }
    (**(code **)(*param_1 + 0x178))(param_1);
  }
  return iVar5;
}

