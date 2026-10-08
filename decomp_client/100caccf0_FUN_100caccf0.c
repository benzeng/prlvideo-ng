
uint * FUN_100caccf0(undefined8 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  long local_50;
  int local_3c;
  
  lVar5 = FUN_100c57ec0();
  puVar6 = (uint *)0x0;
  if (lVar5 != 0) {
    iVar2 = FUN_100c57f60(lVar5,0x200);
    puVar6 = (uint *)0x0;
    if ((iVar2 != 0) &&
       (puVar6 = (uint *)FUN_100bf3540(0x40,"txt_db.c",0x59), puVar6 != (uint *)0x0)) {
      *puVar6 = param_2;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      lVar7 = FUN_100c60010();
      *(long *)(puVar6 + 2) = lVar7;
      if (lVar7 != 0) {
        iVar2 = param_2 * 8;
        lVar7 = FUN_100bf3540(iVar2,"txt_db.c",0x60);
        *(long *)(puVar6 + 4) = lVar7;
        if (lVar7 != 0) {
          lVar7 = FUN_100bf3540(iVar2,"txt_db.c",0x62);
          *(long *)(puVar6 + 6) = lVar7;
          if (lVar7 != 0) {
            if (0 < (int)param_2) {
              bVar13 = (param_2 & 1) != 0;
              if (bVar13) {
                **(undefined8 **)(puVar6 + 4) = 0;
                **(undefined8 **)(puVar6 + 6) = 0;
              }
              uVar8 = (ulong)bVar13;
              if (param_2 != 1) {
                do {
                  *(undefined8 *)(*(long *)(puVar6 + 4) + uVar8 * 8) = 0;
                  *(undefined8 *)(*(long *)(puVar6 + 6) + uVar8 * 8) = 0;
                  *(undefined8 *)(*(long *)(puVar6 + 4) + 8 + uVar8 * 8) = 0;
                  *(undefined8 *)(*(long *)(puVar6 + 6) + 8 + uVar8 * 8) = 0;
                  uVar8 = uVar8 + 2;
                } while (param_2 != (uint)uVar8);
              }
            }
            *(undefined1 *)(*(long *)(lVar5 + 8) + 0x1ff) = 0;
            local_50 = 0;
            local_3c = 0x200;
            iVar3 = 0;
LAB_100cace70:
            do {
              do {
                iVar4 = iVar3;
                if (iVar4 != 0) {
                  local_3c = local_3c + 0x200;
                  iVar3 = FUN_100c58060(lVar5,(long)local_3c);
                  if (iVar3 == 0) goto LAB_100cad015;
                }
                lVar7 = (long)iVar4;
                *(undefined1 *)(*(long *)(lVar5 + 8) + lVar7) = 0;
                FUN_100c58b50(param_1,*(long *)(lVar5 + 8) + lVar7,local_3c - iVar4);
                pcVar12 = *(char **)(lVar5 + 8);
                if (pcVar12[lVar7] == '\0') {
                  FUN_100c57f20(lVar5);
                  return puVar6;
                }
                local_50 = local_50 + 1;
              } while ((iVar4 == 0) && (iVar3 = 0, *pcVar12 == '#'));
              sVar9 = _strlen(pcVar12 + lVar7);
              iVar3 = (int)sVar9 + iVar4;
            } while (pcVar12[(long)iVar3 + -1] != '\n');
            pcVar12[(long)iVar3 + -1] = '\0';
            puVar10 = (undefined8 *)FUN_100bf3540(iVar3 + iVar2 + 8,"txt_db.c",0x7f);
            if (puVar10 != (undefined8 *)0x0) {
              pcVar11 = (char *)((long)puVar10 + (long)(iVar2 + 8));
              *puVar10 = pcVar11;
              pcVar12 = *(char **)(lVar5 + 8);
              uVar8 = 1;
LAB_100cacf60:
              bVar13 = false;
              do {
                cVar1 = *pcVar12;
                if (cVar1 == '\0') goto LAB_100cacfb0;
                if (cVar1 == '\t') {
                  if (!bVar13) goto LAB_100cacf99;
                  pcVar11 = pcVar11 + -1;
                }
                bVar13 = cVar1 == '\\';
                pcVar12 = pcVar12 + 1;
                *pcVar11 = cVar1;
                pcVar11 = pcVar11 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_100cad015:
  FUN_100c57f20(lVar5);
  _fwrite("OPENSSL_malloc failure\n",0x17,1,*(FILE **)PTR____stderrp_1021e1848);
LAB_100cad03d:
  if (puVar6 != (uint *)0x0) {
    if (*(long *)(puVar6 + 2) != 0) {
      FUN_100c5ffd0();
    }
    if (*(long *)(puVar6 + 4) != 0) {
      FUN_100bf3910();
    }
    if (*(long *)(puVar6 + 6) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(puVar6);
  }
  return (uint *)0x0;
LAB_100cacf99:
  *pcVar11 = '\0';
  pcVar11 = pcVar11 + 1;
  pcVar12 = pcVar12 + 1;
  if ((long)(int)param_2 <= (long)uVar8) goto LAB_100cacfb0;
  puVar10[uVar8] = pcVar11;
  uVar8 = uVar8 + 1;
  goto LAB_100cacf60;
LAB_100cacfb0:
  *pcVar11 = '\0';
  if (((uint)uVar8 != param_2) || (uVar8 = (ulong)param_2, *pcVar12 != '\0')) {
    _fprintf(*(FILE **)PTR____stderrp_1021e1848,
             "wrong number of fields on line %ld (looking for field %d, got %d, \'%s\' left)\n",
             local_50,(ulong)param_2,uVar8);
    goto LAB_100cad0b4;
  }
  puVar10[(int)param_2] = pcVar11 + 1;
  iVar4 = FUN_100c604e0(*(undefined8 *)(puVar6 + 2),puVar10);
  iVar3 = 0;
  if (iVar4 == 0) goto code_r0x000100cacff0;
  goto LAB_100cace70;
code_r0x000100cacff0:
  _fwrite("failure in sk_push\n",0x13,1,*(FILE **)PTR____stderrp_1021e1848);
LAB_100cad0b4:
  FUN_100c57f20(lVar5);
  goto LAB_100cad03d;
}

