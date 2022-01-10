mkdir -p docs
cd docs

echo -e "\nStart download documents ...\n"

wget --no-check-certificate -O ./w806_mcu_reference.pdf http://r0.hlktech.com/download/HLK-W801/1/W801%E8%8A%AF%E7%89%87%E8%A7%84%E6%A0%BC%E4%B9%A6V1.0.pdf

echo -e ""

wget --no-check-certificate -O ./w806_mcu_registers.pdf http://r0.hlktech.com/download/HLK-W806/1/%E5%AF%84%E5%AD%98%E5%99%A8.pdf
