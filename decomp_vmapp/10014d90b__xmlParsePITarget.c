
xmlChar * _xmlParsePITarget(undefined8 param_1)

{
  int iVar1;
  xmlChar *str1;
  int local_c;
  
  str1 = (xmlChar *)_xmlParseName(param_1);
  if ((((str1 != (xmlChar *)0x0) && ((*str1 == 'x' || (*str1 == 'X')))) &&
      ((str1[1] == 'm' || (str1[1] == 'M')))) && ((str1[2] == 'l' || (str1[2] == 'L')))) {
    if ((*str1 == 'x') && (((str1[1] == 'm' && (str1[2] == 'l')) && (str1[3] == '\0')))) {
      FUN_100144217(param_1,0x40,"XML declaration allowed only at the start of the document\n");
    }
    else if (str1[3] == '\0') {
      FUN_100143bf8(param_1,0x40,0);
    }
    else {
      for (local_c = 0; (&PTR_s_xml_stylesheet_10110d760)[local_c] != (undefined *)0x0;
          local_c = local_c + 1) {
        iVar1 = _xmlStrEqual(str1,(&PTR_s_xml_stylesheet_10110d760)[local_c]);
        if (iVar1 != 0) {
          return str1;
        }
      }
      FUN_100144304(param_1,0x40,"xmlParsePITarget: invalid name prefix \'xml\'\n",0,0);
    }
  }
  return str1;
}

