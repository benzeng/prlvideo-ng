
undefined8 FUN_1000eb0e0(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *local_38;
  
  if (param_1 <= param_2) {
    local_38 = (undefined8 *)0x0;
    puVar4 = param_1;
    do {
      uVar2 = *puVar4;
      if (uVar2 < 0x17) {
        if ((0x40e000U >> (uVar2 & 0x1f) & 1) == 0) {
          if ((0xc00U >> (uVar2 & 0x1f) & 1) == 0) {
            if (uVar2 == 1) {
              return 1;
            }
          }
          else if (((puVar4[7] & param_3) != 0) &&
                  (cVar1 = FUN_1000eb0e0(*(long *)(puVar4 + 1),
                                         (long)(int)puVar4[3] * 0x3c + 0x3c + *(long *)(puVar4 + 1),
                                         param_3,param_4 + 1), cVar1 == '\0')) {
            return 0;
          }
        }
        else if ((puVar4[7] & param_3) != 0) {
          if ((int)DAT_1011c37a0 != 0) {
            FUN_1008e3970("","vm",0,"Calling %s...",*(undefined8 *)(puVar4 + 0xb));
            uVar2 = *puVar4;
          }
          if (uVar2 - 0xe < 2) {
            puVar5 = *(undefined8 **)(param_1 + 1);
            if (puVar5 == (undefined8 *)0x0) {
              if ((int)DAT_1011c37a0 == 0) {
                return 1;
              }
              FUN_1008e3970("","vm",0,"Skipping %s ... Class pointer is NULL for item %s",
                            *(undefined8 *)(puVar4 + 0xb),*(undefined8 *)(param_1 + 0xb));
              return 1;
            }
            if ((param_1[7] & 0x100) == 0) {
              if ((param_1[7] & 0x200) != 0) {
                local_38 = (undefined8 *)*puVar5;
              }
              puVar5 = local_38;
              bVar6 = local_38 == (undefined8 *)0x0;
              local_38 = (undefined8 *)0x0;
              if (bVar6) goto LAB_1000eb280;
            }
            local_38 = puVar5;
            if (uVar2 == 0xe) {
              iVar3 = (**(code **)(puVar4 + 1))();
            }
            else {
              iVar3 = (**(code **)(puVar4 + 1))(puVar5,param_3);
            }
          }
          else if (uVar2 == 0x16) {
            iVar3 = (**(code **)(puVar4 + 1))(param_3);
          }
          else {
            iVar3 = 0;
            if (uVar2 == 0xd) {
              iVar3 = (**(code **)(puVar4 + 1))();
            }
          }
          if ((int)DAT_1011c37a0 != 0) {
            FUN_1008e3970("","vm",0,"Calling %s... done. Ret=0x%x",*(undefined8 *)(puVar4 + 0xb),
                          iVar3);
          }
          if (iVar3 != 0) {
            FUN_1008e3970("","vm",0,
                          "Callback function %s type 0x%x failed. Error code 0x%x, line=%u",
                          *(undefined8 *)(puVar4 + 0xb),*puVar4,iVar3,0x179);
            return 0;
          }
        }
      }
LAB_1000eb280:
      puVar4 = puVar4 + 0xf;
    } while (puVar4 <= param_2);
  }
  return 1;
}

