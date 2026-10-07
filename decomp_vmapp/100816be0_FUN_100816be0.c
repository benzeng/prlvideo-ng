
char * FUN_100816be0(long param_1,char *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  uVar5 = *(ulong *)(param_1 + 0x38);
  uVar9 = *(ulong *)(param_1 + 0x40) & 8;
  cVar10 = '\x05';
  if (uVar9 == 0) {
    cVar10 = (lVar3 == 1) + '\a';
  }
  uVar11 = *(ulong *)(param_1 + 0x40) & 2;
  pcVar13 = "";
  if (uVar11 != 0) {
    pcVar13 = " export";
  }
  if ((uVar5 & 1) == 0) {
    if ((uVar5 & 2) == 0) {
      pcVar7 = "TLSv1.2";
      if ((uVar5 & 4) == 0) {
        pcVar7 = "unknown";
      }
    }
    else {
      pcVar7 = "SSLv3";
    }
  }
  else {
    pcVar7 = "SSLv2";
  }
  if (lVar1 < 0x10) {
    pcVar6 = "DH/RSA";
    switch(lVar1) {
    case 1:
      if (uVar11 == 0) {
        pcVar6 = "RSA";
      }
      else {
        pcVar6 = "RSA(1024)";
        if (uVar9 != 0) {
          pcVar6 = "RSA(512)";
        }
      }
      break;
    case 2:
      break;
    default:
      goto switchD_100816caa_caseD_3;
    case 4:
      pcVar6 = "DH/DSS";
      break;
    case 8:
      if (uVar11 == 0) {
        pcVar6 = "DH";
      }
      else {
        pcVar6 = "DH(1024)";
        if (uVar9 != 0) {
          pcVar6 = "DH(512)";
        }
      }
    }
  }
  else if (lVar1 < 0x100) {
    if (lVar1 < 0x40) {
      if (lVar1 == 0x10) {
        pcVar6 = "KRB5";
      }
      else if (lVar1 == 0x20) {
        pcVar6 = "ECDH/RSA";
      }
      else {
switchD_100816caa_caseD_3:
        pcVar6 = "unknown";
      }
    }
    else if (lVar1 == 0x40) {
      pcVar6 = "ECDH/ECDSA";
    }
    else {
      if (lVar1 != 0x80) goto switchD_100816caa_caseD_3;
      pcVar6 = "ECDH";
    }
  }
  else if (lVar1 == 0x100) {
    pcVar6 = "PSK";
  }
  else if (lVar1 == 0x200) {
    pcVar6 = "GOST";
  }
  else {
    if (lVar1 != 0x400) goto switchD_100816caa_caseD_3;
    pcVar6 = "SRP";
  }
  if (lVar2 < 0x10) {
    pcVar8 = "RSA";
    switch(lVar2) {
    case 1:
      break;
    case 2:
      pcVar8 = "DSS";
      break;
    default:
      goto switchD_100816d86_caseD_3;
    case 4:
      pcVar8 = "None";
      break;
    case 8:
      pcVar8 = "DH";
    }
  }
  else if (lVar2 < 0x100) {
    if (lVar2 < 0x40) {
      if (lVar2 == 0x10) {
        pcVar8 = "ECDH";
      }
      else if (lVar2 == 0x20) {
        pcVar8 = "KRB5";
      }
      else {
switchD_100816d86_caseD_3:
        pcVar8 = "unknown";
      }
    }
    else if (lVar2 == 0x40) {
      pcVar8 = "ECDSA";
    }
    else {
      if (lVar2 != 0x80) goto switchD_100816d86_caseD_3;
      pcVar8 = "PSK";
    }
  }
  else if (lVar2 == 0x100) {
    pcVar8 = "GOST94";
  }
  else if (lVar2 == 0x200) {
    pcVar8 = "GOST01";
  }
  else {
    if (lVar2 != 0x400) goto switchD_100816d86_caseD_3;
    pcVar8 = "SRP";
  }
  if (lVar3 < 0x10) {
    pcVar14 = "3DES(168)";
    switch(lVar3) {
    case 1:
      if (uVar11 == 0) {
        pcVar14 = "DES(56)";
      }
      else {
        pcVar14 = "DES(56)";
        if (cVar10 == '\x05') {
          pcVar14 = "DES(40)";
        }
      }
      break;
    case 2:
      break;
    default:
      goto switchD_100816e63_caseD_3;
    case 4:
      if (uVar11 == 0) {
        pcVar14 = "RC4(128)";
        if ((*(ulong *)(param_1 + 0x48) & 2) != 0) {
          pcVar14 = "RC4(64)";
        }
      }
      else {
        pcVar14 = "RC4(56)";
        if (cVar10 == '\x05') {
          pcVar14 = "RC4(40)";
        }
      }
      break;
    case 8:
      if (uVar11 == 0) {
        pcVar14 = "RC2(128)";
      }
      else {
        pcVar14 = "RC2(56)";
        if (cVar10 == '\x05') {
          pcVar14 = "RC2(40)";
        }
      }
    }
  }
  else if (lVar3 < 0x100) {
    if (lVar3 < 0x40) {
      if (lVar3 == 0x10) {
        pcVar14 = "IDEA(128)";
      }
      else if (lVar3 == 0x20) {
        pcVar14 = "None";
      }
      else {
switchD_100816e63_caseD_3:
        pcVar14 = "unknown";
      }
    }
    else if (lVar3 == 0x40) {
      pcVar14 = "AES(128)";
    }
    else {
      if (lVar3 != 0x80) goto switchD_100816e63_caseD_3;
      pcVar14 = "AES(256)";
    }
  }
  else if (lVar3 < 0x1000) {
    if (lVar3 < 0x400) {
      if (lVar3 == 0x100) {
        pcVar14 = "Camellia(128)";
      }
      else {
        if (lVar3 != 0x200) goto switchD_100816e63_caseD_3;
        pcVar14 = "Camellia(256)";
      }
    }
    else if (lVar3 == 0x400) {
      pcVar14 = "GOST89(256)";
    }
    else {
      if (lVar3 != 0x800) goto switchD_100816e63_caseD_3;
      pcVar14 = "SEED(128)";
    }
  }
  else if (lVar3 == 0x1000) {
    pcVar14 = "AESGCM(128)";
  }
  else {
    if (lVar3 != 0x2000) goto switchD_100816e63_caseD_3;
    pcVar14 = "AESGCM(256)";
  }
  if (lVar4 < 0x10) {
    pcVar12 = "MD5";
    switch(lVar4) {
    case 1:
      break;
    case 2:
      pcVar12 = "SHA1";
      break;
    default:
      goto switchD_100817085_caseD_3;
    case 4:
      pcVar12 = "GOST94";
      break;
    case 8:
      pcVar12 = "GOST89";
    }
  }
  else {
    if (lVar4 == 0x10) {
      pcVar12 = "SHA256";
      goto switchD_100817085_caseD_1;
    }
    if (lVar4 == 0x20) {
      pcVar12 = "SHA384";
      goto switchD_100817085_caseD_1;
    }
    if (lVar4 == 0x40) {
      pcVar12 = "AEAD";
      goto switchD_100817085_caseD_1;
    }
switchD_100817085_caseD_3:
    pcVar12 = "unknown";
  }
switchD_100817085_caseD_1:
  if (param_2 == (char *)0x0) {
    param_2 = (char *)FUN_10081ddd0(0x80,"ssl_ciph.c",0x6e5);
    param_3 = 0x80;
    if (param_2 == (char *)0x0) {
      return "OPENSSL_malloc Error";
    }
  }
  else if (param_3 < 0x80) {
    return "Buffer too small";
  }
  FUN_1008823b0(param_2,(long)param_3,"%-23s %s Kx=%-8s Au=%-4s Enc=%-9s Mac=%-4s%s\n",
                *(undefined8 *)(param_1 + 8),pcVar7,pcVar6,pcVar8,pcVar14,pcVar12,pcVar13);
  return param_2;
}

