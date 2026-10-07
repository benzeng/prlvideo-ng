
void FUN_1001e83e8(int *param_1,int param_2,int param_3,long param_4,int param_5,undefined8 param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  int local_64;
  long local_60;
  undefined8 local_40;
  undefined8 local_28;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 2) {
      local_28 = 0;
      if (param_2 == 1) {
        local_40 = *(undefined8 *)(param_1 + 6);
      }
      else {
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x18] = param_3;
        local_40 = *(undefined8 *)(param_1 + 4);
      }
      local_64 = param_5;
      if (param_5 == 0) {
        local_60 = param_4;
        if (((param_4 == 0) && (-1 < param_1[0x29])) && (*(long *)(param_1 + 0x2e) != 0)) {
          local_60 = *(long *)(*(long *)(param_1 + 0x2e) + 8);
        }
        if (((local_60 == 0) && (*(long *)(param_1 + 0x14) != 0)) &&
           (*(long *)(*(long *)(param_1 + 0x14) + 0x38) != 0)) {
          local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x14) + 0x38) + 8);
          local_64 = *(int *)(*(long *)(*(long *)(param_1 + 0x14) + 0x38) + 0x34);
        }
      }
      else {
        local_60 = 0;
        if (*(long *)(param_1 + 0xc) == 0) {
          if ((*(long *)(param_1 + 0x14) != 0) && (*(long *)(*(long *)(param_1 + 0x14) + 0x38) != 0)
             ) {
            local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x14) + 0x38) + 8);
          }
        }
        else {
          local_28 = *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x88);
        }
      }
      ___xmlRaiseError(*(undefined8 *)(param_1 + 8),local_40,*(undefined8 *)(param_1 + 2),param_1,
                       local_60,0x11,param_3,param_2,local_28,local_64,param_7,param_8,param_9,0,0,
                       param_6,param_7,param_8,param_9);
    }
    else if (*param_1 == 1) {
      if (param_2 == 1) {
        local_40 = *(undefined8 *)(param_1 + 6);
      }
      else {
        param_1[9] = param_1[9] + 1;
        param_1[8] = param_3;
        local_40 = *(undefined8 *)(param_1 + 4);
      }
      ___xmlRaiseError(*(undefined8 *)(param_1 + 10),local_40,*(undefined8 *)(param_1 + 2),param_1,
                       param_4,0x10,param_3,param_2,0,0,param_7,param_8,param_9,0,0,param_6,param_7,
                       param_8,param_9);
    }
    else {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlschemas.c",0x71d);
    }
  }
  return;
}

