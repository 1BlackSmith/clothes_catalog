#pragma once

class Product {
protected:
    /// <summary>
    /// string name
    /// cSize sizes[]
    /// image photo
    /// string category
    /// cColor colors[]
    /// cComposition composition[]
    /// string brand
    /// cGender gender
    /// cStyle style
    /// cAgeCategory age_category
    /// float price
    /// int amount
    /// </summary>
    TCHAR name;

public:
    Product() {}
    Product(TCHAR name): name(name) {}
    virtual ~Product() {}
    virtual Product* Clone() const = 0;
};