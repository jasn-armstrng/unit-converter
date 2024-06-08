#ifndef UNITS_DATA_H
#define UNITS_DATA_H

#include <string_view>

const std::string_view units_data =
R"(DATA        Bit                 b       Bit            1
DATA        Byte                B       Bit            8
DATA        Kilobit             kbit    Bit            1000
DATA        Kibibit             Kib     Bit            1024
DATA        Kilobyte            KB      Bit            8000
DATA        Kibibyte            KiB     Bit            8192
DATA        Megabit             Mbit    Bit            1000000
DATA        Mebibit             Mib     Bit            1048576
DATA        Megabyte            MB      Bit            8000000
DATA        Mebibyte            MiB     Bit            8388608
DATA        Gigabit             Gbit    Bit            1000000000
DATA        Gibibit             Gib     Bit            1073741824
DATA        Gigabyte            GB      Bit            8000000000
DATA        Gibibyte            GiB     Bit            8589934592
DATA        Terabit             Tbit    Bit            1000000000000
DATA        Tebibit             Tib     Bit            1099511627776
DATA        Terabyte            TB      Bit            8000000000000
DATA        Tebibyte            TiB     Bit            8796093022208
DISTANCE    Meter               m       Meter          1
DISTANCE    Kilometer           km      Meter          1000
DISTANCE    Centimeter          cm      Meter          0.01
DISTANCE    Millimeter          mm      Meter          0.001
DISTANCE    Micrometer          μm     Meter          0.000001
DISTANCE    Nanometer           nm      Meter          0.000000001
DISTANCE    Inch                in      Meter          0.0254
DISTANCE    Foot                ft      Meter          0.3048
DISTANCE    Yard                yd      Meter          0.9144
DISTANCE    Mile                mi      Meter          1609.34
VOLUME      Liter               l       Liter          1
VOLUME      Milliliter          ml      Liter          0.001
VOLUME      Cubic meter         m^3     Liter          1000
VOLUME      Cubic centimeter    cc      Liter          0.001
VOLUME      Gallon              gal     Liter          3.78541
VOLUME      Quart               qt      Liter          0.946353
VOLUME      Pint                pt      Liter          0.473176
VOLUME      Fluid ounce         fl oz   Liter          0.0295735
AREA        Square meter        m^2     Square meter   1
AREA        Square kilometer    km^2    Square meter   1000000
AREA        Square centimeter   cm^2    Square meter   0.0001
AREA        Square millimeter   mm^2    Square meter   0.000001
AREA        Hectare             ha      Square meter   10000
AREA        Acre                ac      Square meter   4046.86
AREA        Square inch         in^2    Square meter   0.00064516
AREA        Square foot         ft^2    Square meter   0.092903
AREA        Square yard         yd^2    Square meter   0.836127
AREA        Square mile         mi^2    Square meter   2589988
MASS        Kilogram            kg      Kilogram       1
MASS        Gram                g       Kilogram       0.001
MASS        Milligram           mg      Kilogram       0.000001
MASS        Metric ton          t       Kilogram       1000
MASS        Pound               lb      Kilogram       0.453592
MASS        Ounce               oz      Kilogram       0.0283495
TIME        Second              s       Second         1
TIME        Minute              min     Second         60
TIME        Hour                h       Second         3600
TIME        Day                 d       Second         86400
TIME        Week                wk      Second         604800
TIME        Month               mo      Second         2629800
TIME        Year                yr      Second         31557600
TEMPERATURE celsius             C       Celsius        1
TEMPERATURE fahrenheit          F       Celsius        1
TEMPERATURE kelvin              K       Celsius        1)";

#endif
