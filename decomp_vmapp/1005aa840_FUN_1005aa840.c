
void FUN_1005aa840(long *param_1,int param_2,char param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = param_2 % 0x10;
  if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"BlockGroup: group index = %u (0x%X)",(int)param_1[7],
                  (int)param_1[7]);
  }
  if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"BlockGroup: load request = %p",param_1[4]);
  }
  if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
    if ((long *)param_1[5] == param_1 + 5) {
      pcVar4 = "No";
    }
    else {
      pcVar4 = "Yes";
    }
    FUN_1008e3970("","vdisk",param_2,"BlockGroup: is in LRU = %s",pcVar4);
  }
  if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"BlockGroup: group buffer = %p",*param_1);
  }
  if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"BlockGroup: extra group buffer = %p",param_1[1]);
  }
  if (param_3 != '\0') {
    if (*param_1 != 0) {
      uVar3 = 0;
      lVar6 = 0xc;
      if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
        uVar3 = 0;
        FUN_1008e3970("","vdisk",param_2,"BlockGroup: group content {");
        lVar6 = 0xc;
      }
      do {
        lVar1 = *param_1;
        lVar2 = *(long *)(lVar1 + -0xc + lVar6);
        if ((lVar2 != -1) && ((iVar5 < 1 || (iVar5 <= DAT_1011b55f8)))) {
          FUN_1008e3970("","vdisk",param_2,
                        "BlockGroup:\t[%d] snap id = %u, storage id = %u, offset = %llu (0x%llX)",
                        uVar3 & 0xffffffff,*(undefined4 *)(lVar1 + -4 + lVar6),
                        *(undefined4 *)(lVar1 + lVar6),lVar2,lVar2);
        }
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar3 != 0x1000);
      if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
        FUN_1008e3970("","vdisk",param_2,"BlockGroup: group content }");
      }
    }
    if (param_1[1] != 0) {
      uVar3 = 0;
      lVar6 = 0xc;
      if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
        uVar3 = 0;
        FUN_1008e3970("","vdisk",param_2,"BlockGroup: extra group content {");
        lVar6 = 0xc;
      }
      do {
        lVar1 = param_1[1];
        lVar2 = *(long *)(lVar1 + -0xc + lVar6);
        if ((lVar2 != -1) && ((iVar5 < 1 || (iVar5 <= DAT_1011b55f8)))) {
          FUN_1008e3970("","vdisk",param_2,
                        "BlockGroup:\t[%d] snap id = %u, storage id = %u, offset = %llu (0x%llX)",
                        uVar3 & 0xffffffff,*(undefined4 *)(lVar1 + -4 + lVar6),
                        *(undefined4 *)(lVar1 + lVar6),lVar2,lVar2);
        }
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar3 != 0x1000);
      if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
        FUN_1008e3970("","vdisk",param_2,"BlockGroup: extra group content }");
        return;
      }
    }
  }
  return;
}

