
void FUN_1005213d0(undefined8 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  string *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  __darwin_ct_rune_t _Var7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  char *pcVar17;
  string *psVar18;
  char *pcVar19;
  ulong uVar20;
  string local_60;
  char local_5f [7];
  size_t local_58;
  char *local_50;
  undefined8 local_48;
  ulong uStack_40;
  char *pcStack_38;
  
  pcVar19 = " \t,/_-";
  if (param_3 != (char *)0x0) {
    pcVar19 = param_3;
  }
  pcVar9 = _strpbrk(param_2,pcVar19);
  while ((pcVar9 != (char *)0x0 && (*pcVar9 != '\0'))) {
    uVar20 = (long)pcVar9 - (long)param_2;
    if (0xffffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar20 < 0x17) {
      local_48 = CONCAT71(local_48._1_7_,(char)uVar20 * '\x02');
      pcVar10 = (char *)((long)&local_48 + 1);
    }
    else {
      uVar14 = uVar20 + 0x10 & 0xfffffffffffffff0;
      pcVar10 = operator_new(uVar14);
      pcStack_38 = pcVar10;
      local_48 = uVar14 | 1;
      uStack_40 = uVar20;
    }
    if (param_2 != pcVar9) {
      pcVar12 = pcVar10;
      pcVar15 = param_2;
      if (pcVar9 + ~(ulong)param_2 == (char *)0xffffffffffffffff) {
LAB_100521530:
        do {
          *pcVar12 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar12 = pcVar12 + 1;
        } while (pcVar9 != pcVar15);
      }
      else {
        uVar14 = uVar20 & 0xffffffffffffffe0;
        if ((uVar14 == 0) ||
           ((pcVar10 <= pcVar9 + -1 && (param_2 <= pcVar9 + (long)(pcVar10 + (-1 - (long)param_2))))
           )) {
          uVar14 = 0;
        }
        else {
          pcVar12 = pcVar10 + uVar14;
          pcVar17 = pcVar10 + 0x10;
          pcVar15 = param_2 + uVar14;
          param_2 = param_2 + 0x10;
          uVar16 = uVar20 & 0xffffffffffffffe0;
          do {
            uVar3 = *(undefined8 *)(param_2 + -8);
            uVar4 = *(undefined8 *)param_2;
            uVar5 = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)(pcVar17 + -0x10) = *(undefined8 *)(param_2 + -0x10);
            *(undefined8 *)(pcVar17 + -8) = uVar3;
            *(undefined8 *)pcVar17 = uVar4;
            *(undefined8 *)(pcVar17 + 8) = uVar5;
            pcVar17 = pcVar17 + 0x20;
            param_2 = param_2 + 0x20;
            uVar16 = uVar16 - 0x20;
          } while (uVar16 != 0);
        }
        if (uVar20 != uVar14) goto LAB_100521530;
      }
      pcVar10 = pcVar10 + uVar20;
    }
    *pcVar10 = '\0';
    if ((local_48 & 1) == 0) {
      pcVar10 = (char *)((long)&local_48 + (local_48 >> 1 & 0x7f) + 1);
      pcVar12 = (char *)((long)&local_48 + 1);
    }
    else {
      pcVar10 = pcStack_38 + uStack_40;
      pcVar12 = pcStack_38;
    }
    for (; pcVar12 != pcVar10; pcVar12 = pcVar12 + 1) {
      _Var7 = ___tolower((int)*pcVar12);
      *pcVar12 = (char)_Var7;
    }
    psVar18 = (string *)*param_1;
    psVar2 = (string *)param_1[1];
    if (psVar18 == psVar2) {
LAB_100521640:
      if (psVar18 == psVar2) goto LAB_100521645;
    }
    else {
      uVar20 = local_48 >> 1 & 0x7f;
      if ((local_48 & 1) != 0) {
        uVar20 = uStack_40;
      }
      pcVar10 = pcStack_38;
      if ((local_48 & 1) == 0) {
        pcVar10 = (char *)((long)&local_48 + 1);
      }
      do {
        bVar6 = (byte)*psVar18 & 1;
        if (bVar6 == 0) {
          uVar14 = (ulong)((byte)*psVar18 >> 1);
        }
        else {
          uVar14 = *(ulong *)(psVar18 + 8);
        }
        if (uVar14 == uVar20) {
          if (bVar6 == 0) {
            sVar11 = 0;
            if (uVar20 == 0) goto LAB_100521640;
            while (psVar18[sVar11 + 1] == *(string *)(pcVar10 + sVar11)) {
              sVar11 = sVar11 + 1;
              if (uVar20 == sVar11) goto LAB_100521640;
            }
          }
          else if ((uVar20 == 0) ||
                  (iVar8 = _memcmp(*(void **)(psVar18 + 0x10),pcVar10,uVar20), iVar8 == 0))
          goto LAB_100521640;
        }
        psVar18 = psVar18 + 0x18;
      } while (psVar18 != psVar2);
LAB_100521645:
      if (psVar2 == (string *)param_1[2]) {
        FUN_1000e2970(param_1,&local_48);
      }
      else {
        std::string::string(psVar2,(string *)&local_48);
        param_1[1] = param_1[1] + 0x18;
      }
    }
    cVar1 = *pcVar9;
    param_2 = pcVar9;
    while ((cVar1 != '\0' && (pcVar9 = _strchr(pcVar19,(int)cVar1), pcVar9 != (char *)0x0))) {
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    }
    pcVar9 = _strpbrk(param_2,pcVar19);
    std::string::~string((string *)&local_48);
  }
  if (*param_2 == '\0') {
    return;
  }
  _strlen(param_2);
  std::string::__init((char *)&local_60,(ulong)param_2);
  if (((byte)local_60 & 1) == 0) {
    pcVar19 = local_5f + ((byte)local_60 >> 1);
    pcVar9 = local_5f;
    pcVar10 = local_5f;
  }
  else {
    pcVar19 = local_50 + local_58;
    pcVar9 = local_50;
    pcVar10 = local_50;
  }
  for (; pcVar9 != pcVar19; pcVar9 = pcVar9 + 1) {
    _Var7 = ___tolower((int)*pcVar9);
    *pcVar10 = (char)_Var7;
    pcVar10 = pcVar10 + 1;
  }
  psVar18 = (string *)*param_1;
  psVar2 = (string *)param_1[1];
  if (psVar18 == psVar2) {
LAB_1005217b3:
    if (psVar18 != psVar2) goto LAB_1005217e0;
  }
  else {
    pcVar19 = local_5f;
    sVar11 = (ulong)((byte)local_60 >> 1);
    if (((byte)local_60 & 1) != 0) {
      pcVar19 = local_50;
      sVar11 = local_58;
    }
    do {
      bVar6 = (byte)*psVar18 & 1;
      if (bVar6 == 0) {
        sVar13 = (size_t)((byte)*psVar18 >> 1);
      }
      else {
        sVar13 = *(size_t *)(psVar18 + 8);
      }
      if (sVar13 == sVar11) {
        if (bVar6 == 0) {
          sVar13 = 0;
          if (sVar11 == 0) goto LAB_1005217b3;
          while (psVar18[sVar13 + 1] == *(string *)(pcVar19 + sVar13)) {
            sVar13 = sVar13 + 1;
            if (sVar11 == sVar13) goto LAB_1005217b3;
          }
        }
        else if ((sVar11 == 0) ||
                (iVar8 = _memcmp(*(void **)(psVar18 + 0x10),pcVar19,sVar11), iVar8 == 0))
        goto LAB_1005217b3;
      }
      psVar18 = psVar18 + 0x18;
    } while (psVar18 != psVar2);
  }
  if (psVar2 == (string *)param_1[2]) {
    FUN_1000e2970(param_1,&local_60);
  }
  else {
    std::string::string(psVar2,&local_60);
    param_1[1] = param_1[1] + 0x18;
  }
LAB_1005217e0:
  std::string::~string(&local_60);
  return;
}

