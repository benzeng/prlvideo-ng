
xmlNodePtr FUN_1008f8a9f(long *param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  xmlNodePtr elem;
  xmlNodePtr pxVar4;
  ulong uVar5;
  xmlNodePtr local_80;
  long local_60;
  xmlNodePtr local_40;
  xmlNodePtr local_38;
  int local_2c;
  long local_18;
  
  local_40 = (xmlNodePtr)0x0;
  local_38 = (xmlNodePtr)0x0;
  local_60 = param_3;
  if (param_3 == 0) {
    local_60 = *param_1;
  }
  if ((((param_1 == (long *)0x0) || (param_2 == 0)) || (local_60 == 0)) || (param_4 == (int *)0x0))
  {
    local_80 = (xmlNodePtr)0x0;
  }
  else {
    iVar1 = *param_4;
    if (iVar1 == 6) {
      local_80 = (xmlNodePtr)FUN_1008f8566(param_1,param_2,local_60,param_4);
    }
    else {
      if (iVar1 == 7) {
        piVar3 = *(int **)(param_4 + 10);
        if (piVar3 == (int *)0x0) {
          return (xmlNodePtr)0x0;
        }
        for (local_2c = 0; local_2c < *piVar3; local_2c = local_2c + 1) {
          if (local_38 == (xmlNodePtr)0x0) {
            local_40 = (xmlNodePtr)
                       FUN_1008f8a9f(param_1,param_2,local_60,
                                     *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_2c * 8));
            local_38 = local_40;
          }
          else {
            pxVar4 = (xmlNodePtr)
                     FUN_1008f8a9f(param_1,param_2,local_60,
                                   *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_2c * 8));
            _xmlAddNextSibling(local_38,pxVar4);
          }
          if (local_38 != (xmlNodePtr)0x0) {
            for (; local_38->next != (_xmlNode *)0x0; local_38 = local_38->next) {
            }
          }
        }
      }
      else if (iVar1 == 1) {
        piVar3 = *(int **)(param_4 + 2);
        if (piVar3 == (int *)0x0) {
          return (xmlNodePtr)0x0;
        }
        for (local_2c = 0; local_2c < *piVar3; local_2c = local_2c + 1) {
          if (*(long *)(*(long *)(piVar3 + 2) + (long)local_2c * 8) != 0) {
            uVar2 = *(uint *)(*(long *)(*(long *)(piVar3 + 2) + (long)local_2c * 8) + 8);
            if ((uVar2 < 0x16) && (uVar5 = 1L << ((byte)uVar2 & 0x3f), (uVar5 & 0x3023fa) == 0)) {
              if ((uVar5 & 0x7dc04) == 0) {
                if ((uVar5 & 0x80000) == 0) goto LAB_1008f8be4;
                local_18 = *(long *)(*(long *)(*(long *)(piVar3 + 2) + (long)local_2c * 8) + 0x30);
                while (((local_18 != 0 && (*(uint *)(local_18 + 8) < 9)) &&
                       ((1L << ((byte)*(uint *)(local_18 + 8) & 0x3f) & 0x1faU) != 0))) {
                  elem = (xmlNodePtr)FUN_1008f837e(param_1,param_2,local_60,local_18);
                  pxVar4 = elem;
                  if (local_38 != (xmlNodePtr)0x0) {
                    _xmlAddNextSibling(local_38,elem);
                    pxVar4 = local_40;
                  }
                  local_40 = pxVar4;
                  local_18 = *(long *)(local_18 + 0x30);
                  local_38 = elem;
                }
              }
            }
            else {
LAB_1008f8be4:
              if (local_38 == (xmlNodePtr)0x0) {
                local_40 = (xmlNodePtr)
                           FUN_1008f837e(param_1,param_2,local_60,
                                         *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_2c * 8)
                                        );
                local_38 = local_40;
              }
              else {
                pxVar4 = (xmlNodePtr)
                         FUN_1008f837e(param_1,param_2,local_60,
                                       *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_2c * 8));
                _xmlAddNextSibling(local_38,pxVar4);
                if (local_38->next != (_xmlNode *)0x0) {
                  local_38 = local_38->next;
                }
              }
            }
          }
        }
      }
      local_80 = local_40;
    }
  }
  return local_80;
}

