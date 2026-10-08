
undefined8 * FUN_100b93f80(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 ***local_40;
  undefined8 ***local_38;
  
  local_40 = &local_40;
  local_38 = local_40;
  puVar4 = (undefined8 *)FUN_100b9e750(0x2018);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    pcVar1 = (char *)((long)puVar4 + 4);
    iVar3 = _strcmp("vzlic_share_06",pcVar1);
    puVar5 = puVar4;
    if (iVar3 == 0) {
      DAT_1022cf518 = puVar4;
      FUN_100b94280();
    }
    else {
      *(undefined4 *)((long)puVar4 + 0x14) = 0;
      *(undefined8 *)((long)puVar4 + 0xc) = 0;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      ___snprintf_chk(pcVar1,0x14,0,0xffffffffffffffff,"vzlic_share_06");
      ___bzero(puVar4 + 3,0x400);
      *(undefined4 *)(puVar4 + 0xd) = 1;
      *(undefined4 *)((long)puVar4 + 0x6c) = 0;
      ___bzero((long)puVar4 + 0x109,0x400);
      *(undefined4 *)((long)puVar4 + 0x159) = 2;
      *(undefined4 *)((long)puVar4 + 0x15d) = 0;
      ___bzero((long)puVar4 + 0x1fa,0x400);
      *(undefined4 *)((long)puVar4 + 0x24a) = 3;
      *(undefined4 *)((long)puVar4 + 0x24e) = 0;
      ___bzero((long)puVar4 + 0x2eb,0x400);
      *(undefined4 *)((long)puVar4 + 0x33b) = 4;
      *(undefined4 *)((long)puVar4 + 0x33f) = 0;
      ___bzero((long)puVar4 + 0x3dc,0x400);
      *(undefined4 *)((long)puVar4 + 0x42c) = 5;
      *(undefined4 *)(puVar4 + 0x86) = 0;
      ___bzero((long)puVar4 + 0x4cd,0x400);
      *(undefined4 *)((long)puVar4 + 0x51d) = 6;
      *(undefined4 *)((long)puVar4 + 0x521) = 0;
      ___bzero((long)puVar4 + 0x5be,0x400);
      *(undefined4 *)((long)puVar4 + 0x60e) = 7;
      *(undefined4 *)((long)puVar4 + 0x612) = 0;
      ___bzero((long)puVar4 + 0x6af,0x400);
      *(undefined4 *)((long)puVar4 + 0x6ff) = 8;
      *(undefined4 *)((long)puVar4 + 0x703) = 0;
      iVar3 = FUN_100b9aff0(&local_40,0);
      ppppuVar6 = (undefined8 ****)local_40;
      if (iVar3 == 0) {
        while (ppppuVar6 != &local_40) {
          iVar3 = FUN_100ba1660(ppppuVar6 + 4);
          if (iVar3 - 1U < 7) {
            lVar7 = (long)(int)(iVar3 - 1U) * 0xf1;
            if (*(int *)((long)puVar4 + lVar7 + 0x68) != 1) {
              FUN_100b93eb0(ppppuVar6);
              goto LAB_100b941b0;
            }
            iVar3 = _strcasecmp("VZSRV",(char *)(ppppuVar6 + 4));
            if ((((iVar3 != 0) && (4 < *(int *)((long)puVar4 + lVar7 + 0x6c))) &&
                ((*(byte *)((long)puVar4 + lVar7 + 0x104) & 8) == 0)) ||
               (FUN_100b93eb0(ppppuVar6,(long)(puVar4 + 3) + lVar7), iVar3 == 0))
            goto LAB_100b941b0;
            pbVar2 = (byte *)((long)puVar4 + lVar7 + 0x104);
            *pbVar2 = *pbVar2 | 8;
            ppppuVar6 = (undefined8 ****)*ppppuVar6;
          }
          else {
LAB_100b941b0:
            ppppuVar6 = (undefined8 ****)*ppppuVar6;
          }
        }
        FUN_100b98100(&local_40);
      }
      else {
        puVar4[2] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        FUN_100b9e8c0(puVar4,0);
        puVar5 = (undefined8 *)0x0;
      }
    }
  }
  return puVar5;
}

