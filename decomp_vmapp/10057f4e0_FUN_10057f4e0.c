
int FUN_10057f4e0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x1128);
  if (puVar3 != *(undefined8 **)(param_1 + 0x1130)) {
    do {
      cVar1 = FUN_100594dd0(*puVar3);
      if (cVar1 == '\0') {
        FUN_1008e3970("","vdisk",0,"Filtering is not allowed");
        return -0x7ffdefdc;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined8 **)(param_1 + 0x1130));
    puVar4 = *(undefined8 **)(param_1 + 0x1128);
    if (puVar4 != puVar3) {
      do {
        iVar2 = FUN_100594c60(*puVar4,param_2);
        if (iVar2 < 0) {
          FUN_1008e3970("","vdisk",0,"Error gathering images to filter 0x%x",iVar2);
          return iVar2;
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(undefined8 **)(param_1 + 0x1130));
    }
  }
  return 0;
}

