
undefined4 FUN_1001ff084(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_38;
  undefined8 *local_30;
  
  if ((((*(int *)(param_2 + 0x2c) == *(int *)(param_3 + 0x2c)) &&
       ((*(long *)(param_3 + 0x30) == 0) != (*(long *)(param_2 + 0x30) != 0))) &&
      ((*(long *)(param_3 + 0x38) == 0) != (*(long *)(param_2 + 0x38) != 0))) &&
     ((*(long *)(param_2 + 0x38) == 0 ||
      (*(long *)(*(long *)(param_2 + 0x38) + 8) == *(long *)(*(long *)(param_3 + 0x38) + 8))))) {
    if (*(long *)(param_2 + 0x30) == 0) {
      return 0;
    }
    bVar2 = false;
    for (local_38 = *(undefined8 **)(param_2 + 0x30); local_38 != (undefined8 *)0x0;
        local_38 = (undefined8 *)*local_38) {
      bVar2 = false;
      for (local_30 = *(undefined8 **)(param_3 + 0x30); local_30 != (undefined8 *)0x0;
          local_30 = (undefined8 *)*local_30) {
        if (local_38[1] == local_30[1]) {
          bVar2 = true;
          break;
        }
      }
      if (!bVar2) break;
    }
    if (bVar2) {
      return 0;
    }
  }
  if (*(int *)(param_2 + 0x2c) == *(int *)(param_3 + 0x2c)) {
    if ((*(long *)(param_2 + 0x30) == 0) || (*(long *)(param_3 + 0x30) == 0)) {
      if ((*(long *)(param_2 + 0x38) == 0) ||
         ((*(long *)(param_3 + 0x38) == 0 ||
          (*(long *)(*(long *)(param_2 + 0x38) + 8) == *(long *)(*(long *)(param_3 + 0x38) + 8)))))
      {
        if (((*(long *)(param_2 + 0x38) == 0) ||
            ((*(long *)(*(long *)(param_2 + 0x38) + 8) == 0 || (*(long *)(param_3 + 0x30) == 0))))
           && ((*(long *)(param_3 + 0x38) == 0 ||
               ((*(long *)(*(long *)(param_3 + 0x38) + 8) == 0 || (*(long *)(param_2 + 0x30) == 0)))
               ))) {
          if ((((*(long *)(param_2 + 0x38) != 0) && (*(long *)(*(long *)(param_2 + 0x38) + 8) == 0))
              && (*(long *)(param_3 + 0x30) != 0)) ||
             (((*(long *)(param_3 + 0x38) != 0 && (*(long *)(*(long *)(param_3 + 0x38) + 8) == 0))
              && (*(long *)(param_2 + 0x30) != 0)))) {
            if (*(long *)(param_2 + 0x30) == 0) {
              local_38 = *(undefined8 **)(param_3 + 0x30);
            }
            else {
              local_38 = *(undefined8 **)(param_2 + 0x30);
            }
            for (; local_38 != (undefined8 *)0x0; local_38 = (undefined8 *)*local_38) {
              if (local_38[1] == 0) {
                *(undefined4 *)(param_2 + 0x2c) = 1;
                if (*(long *)(param_2 + 0x30) != 0) {
                  FUN_1001eb6df(*(undefined8 *)(param_2 + 0x30));
                  *(undefined8 *)(param_2 + 0x30) = 0;
                }
                if (*(long *)(param_2 + 0x38) != 0) {
                  (*(code *)_xmlFree)(*(undefined8 *)(param_2 + 0x38));
                  *(undefined8 *)(param_2 + 0x38) = 0;
                }
                return 0;
              }
            }
            if (*(long *)(param_2 + 0x38) == 0) {
              if (*(long *)(param_2 + 0x30) != 0) {
                FUN_1001eb6df(*(undefined8 *)(param_2 + 0x30));
                *(undefined8 *)(param_2 + 0x30) = 0;
              }
              uVar5 = FUN_1001ee9b6(param_1);
              *(undefined8 *)(param_2 + 0x38) = uVar5;
              if (*(long *)(param_2 + 0x38) == 0) {
                return 0xffffffff;
              }
              *(undefined8 *)(*(long *)(param_2 + 0x38) + 8) = 0;
            }
          }
        }
        else {
          bVar2 = false;
          if (*(long *)(param_2 + 0x30) == 0) {
            local_38 = *(undefined8 **)(param_3 + 0x30);
            local_30 = *(undefined8 **)(param_2 + 0x38);
          }
          else {
            local_38 = *(undefined8 **)(param_2 + 0x30);
            local_30 = *(undefined8 **)(param_3 + 0x38);
          }
          bVar3 = false;
          for (; local_38 != (undefined8 *)0x0; local_38 = (undefined8 *)*local_38) {
            if (local_38[1] == 0) {
              bVar2 = true;
            }
            else if (local_38[1] == *(long *)((long)local_30 + 8)) {
              bVar3 = true;
            }
            if ((bVar3) && (bVar2)) break;
          }
          if ((bVar3) && (bVar2)) {
            *(undefined4 *)(param_2 + 0x2c) = 1;
            if (*(long *)(param_2 + 0x30) != 0) {
              FUN_1001eb6df(*(undefined8 *)(param_2 + 0x30));
              *(undefined8 *)(param_2 + 0x30) = 0;
            }
            if (*(long *)(param_2 + 0x38) != 0) {
              (*(code *)_xmlFree)(*(undefined8 *)(param_2 + 0x38));
              *(undefined8 *)(param_2 + 0x38) = 0;
            }
          }
          else if ((!bVar3) || (bVar2)) {
            if ((!bVar3) && (bVar2)) {
              FUN_1001e80a3(param_1,*(undefined8 *)(param_2 + 0x18),0x702,
                            "The union of the wilcard is not expressible.\n",0,0);
              return 0x702;
            }
            if (((!bVar3) && (!bVar2)) && (*(long *)(param_2 + 0x38) == 0)) {
              if (*(long *)(param_2 + 0x30) != 0) {
                FUN_1001eb6df(*(undefined8 *)(param_2 + 0x30));
                *(undefined8 *)(param_2 + 0x30) = 0;
              }
              uVar5 = FUN_1001ee9b6(param_1);
              *(undefined8 *)(param_2 + 0x38) = uVar5;
              if (*(long *)(param_2 + 0x38) == 0) {
                return 0xffffffff;
              }
              *(undefined8 *)(*(long *)(param_2 + 0x38) + 8) =
                   *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
            }
          }
          else {
            if (*(long *)(param_2 + 0x30) != 0) {
              FUN_1001eb6df(*(undefined8 *)(param_2 + 0x30));
              *(undefined8 *)(param_2 + 0x30) = 0;
            }
            if (*(long *)(param_2 + 0x38) == 0) {
              uVar5 = FUN_1001ee9b6(param_1);
              *(undefined8 *)(param_2 + 0x38) = uVar5;
              if (*(long *)(param_2 + 0x38) == 0) {
                return 0xffffffff;
              }
            }
            *(undefined8 *)(*(long *)(param_2 + 0x38) + 8) = 0;
          }
        }
      }
      else {
        *(undefined8 *)(*(long *)(param_2 + 0x38) + 8) = 0;
      }
    }
    else {
      puVar1 = *(undefined8 **)(param_2 + 0x30);
      for (local_38 = *(undefined8 **)(param_3 + 0x30); local_38 != (undefined8 *)0x0;
          local_38 = (undefined8 *)*local_38) {
        bVar2 = false;
        for (local_30 = puVar1; local_30 != (undefined8 *)0x0; local_30 = (undefined8 *)*local_30) {
          if (local_38[1] == local_30[1]) {
            bVar2 = true;
            break;
          }
        }
        if (!bVar2) {
          puVar4 = (undefined8 *)FUN_1001ee9b6(param_1);
          if (puVar4 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          puVar4[1] = local_38[1];
          *puVar4 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 **)(param_2 + 0x30) = puVar4;
        }
      }
    }
  }
  else if (*(int *)(param_2 + 0x2c) == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 1;
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_1001eb6df(*(undefined8 *)(param_2 + 0x30));
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_2 + 0x38));
      *(undefined8 *)(param_2 + 0x38) = 0;
    }
  }
  return 0;
}

